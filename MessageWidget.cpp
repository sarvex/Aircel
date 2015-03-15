#include "At.h"
#include "Define.h"
#include "DeamonConnection.h"
#include "DeamonDatabase.h"
#include "DeamonInterface.h"
#include "MessageDialog.h"
#include "MessageFieldDialog.h"
#include "MessageWidget.h"

#include <QFileDialog>
#include <QHeaderView>
#include <QMenu>
#include <QMessageBox>
#include <QProgressDialog>
#include <QSqlTableModel>
#include <QTableWidgetItem>

MessageWidget::MessageWidget(
        QWidget *parent)
    : QWidget(parent)
{

    this->initialize ();

    this->createActions ();
    this->createToolbar ();
    this->createContextMenu ();

    this->createTree ();
    this->createTable ();

    this->createLayout ();
    this->connect ();
}

/// Actions
bool
MessageWidget::createActions ()
{

    for (int index = 0; index < Action::Count; index++)
    {

        this->action << new QAction (
                            this->actionIcon.at (index),
                            this->actionName.at (index),
                            this);

        this->action[index]->setShortcut (this->actionShortcut.at (index));
        this->action[index]->setToolTip (this->actionToolTip.at (index));
    }

    for (int index = 0; index < Separator::Count; index++)
    {

        this->separator << new QAction (this);
        this->separator[index]->setSeparator (true);
    }

    QObject::connect (this->action.at (Action::New),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onNewTriggered ()));

    QObject::connect (this->action.at (Action::Edit),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onEditTriggered ()));

    QObject::connect (this->action.at (Action::Important),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onImportantTriggered ()));

    QObject::connect (this->action.at (Action::Delete),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onDeleteTriggered ()));

    QObject::connect (this->action.at (Action::Recover),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onRecoverTriggered ()));

    QObject::connect (this->action.at (Action::Send),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onSendTriggered ()));

    QObject::connect (this->action.at (Action::Reply),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onReplyTriggered ()));

    QObject::connect (this->action.at (Action::Forward),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onForwardTriggered ()));

    QObject::connect (this->action.at (Action::Save),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onSaveTriggered ()));

    QObject::connect (this->action.at (Action::Find),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onFindTriggered ()));

    QObject::connect (this->action.at (Action::Export),
                      SIGNAL(triggered ()),
                      this,
                      SLOT(onExportTriggered ()));

    return (true);
}

bool
MessageWidget::onNewTriggered ()
{

    return (this->send ("", ""));
}

bool
MessageWidget::onEditTriggered()
{

    int row = this->table->currentRow ();
    if (0 > row)
    {

        QMessageBox::warning (
                    NULL,
                    NO_SELECTION,
                    NO_SELECTION_MESSAGE,
                    QMessageBox::Ok,
                    QMessageBox::Ok);

        return (false);
    }

    return (this->send (this->table->item (row, Message::Number)->text (),
                        this->table->item (row, Message::Content)->text ()));
}

bool
MessageWidget::onImportantTriggered ()
{

    this->table->setSortingEnabled (false);

    QList<int> indices;
    QList<QTableWidgetSelectionRange> ranges = this->table->selectedRanges ();

    foreach (QTableWidgetSelectionRange range, ranges)
    {

        for (int row = range.topRow (); row <= range.bottomRow (); row++)
        {

            if (false == this->table->isRowHidden (row))
            {

                indices << row;
            }
        }
    }

    qSort(indices.begin (), indices.end (), qGreater<int> ());

    foreach (int index, indices)
    {

        this->table->item (index, Message::Type)->setText (
                    Message::String.at (Message::Important));

        this->table->item (index, Message::Name)->setIcon (
                    this->treeIcon.at (Message::Important));

        DeamonDatabase::getInstance ()->editMessage (
                    this->rowToMessage (index));
    }

    this->updateTable ();
    this->updateTree ();

    this->table->setSortingEnabled (true);
    return (true);
}

bool
MessageWidget::onDeleteTriggered ()
{
    int row = this->table->currentRow ();
    if ( 0 > row)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    this->table->setSortingEnabled (false);

    QList<int> indices;
    QList<QTableWidgetSelectionRange> ranges = this->table->selectedRanges ();

    foreach (QTableWidgetSelectionRange range, ranges)
    {

        for (int row = range.topRow (); row <= range.bottomRow (); row++)
        {

            if (false == this->table->isRowHidden (row))
            {

                indices << row;
            }
        }
    }

    qSort(indices.begin (), indices.end (), qGreater<int> ());

    foreach (int index, indices)
    {

        this->remove (index);
    }

    this->updateTable ();
    this->updateTree ();

    this->table->setSortingEnabled (true);
    return (true);
}

bool
MessageWidget::onRecoverTriggered ()
{
    int row = this->table->currentRow ();
    if ( 0 > row)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    this->table->setSortingEnabled (false);

    QList<int> indices;
    QList<QTableWidgetSelectionRange> ranges = this->table->selectedRanges ();

    foreach (QTableWidgetSelectionRange range, ranges)
    {

        for (int row = range.topRow (); row <= range.bottomRow (); row++)
        {

            if (false == this->table->isRowHidden (row))
            {

                indices << row;
            }
        }
    }

    qSort(indices.begin (), indices.end (), qGreater<int> ());

    foreach (int index, indices)
    {
        this->recover (index);
    }

    this->updateTable ();
    this->updateTree ();

    this->table->setSortingEnabled (true);
    return (true);
}

bool
MessageWidget::onSendTriggered ()
{
    int index = this->table->currentRow ();
    if (0 > index)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    return (this->send (this->table->item (index, Message::Number)->text (),
                        this->table->item (index, Message::Content)->text ()));
}

bool
MessageWidget::onSaveTriggered ()
{
    int row = this->table->currentRow ();
    if (0 > row)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    QTableWidgetItem * item = this->table->item (row, Message::Number);
    if (NULL != item)
    {

        emit this->save (item->text ());
        return (true);

    }
    else
    {

        return (false);
    }
}

bool
MessageWidget::onReplyTriggered ()
{
    int row = this->table->currentRow ();
    if (0 > row)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    QTableWidgetItem * item = this->table->item (row, Message::Number);
    if (NULL != item)
    {

        this->send(item->text (), "");
        return (true);

    }
    else
    {

        return (false);
    }
}

bool
MessageWidget::onForwardTriggered ()
{
    int row = this->table->currentRow ();
    if (0 > row)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    QTableWidgetItem * item = this->table->item (row, Message::Number);
    if (NULL != item)
    {

        this->send("", this->table->item (row, Message::Content)->text ());
        return (true);

    }
    else
    {

        return (false);
    }
}

bool
MessageWidget::onFindTriggered ()
{
    if (true == this->searchAction->isVisible ())
    {

        this->searchAction->setVisible (false);

    }
    else
    {

        this->searchAction->setVisible (true);
        this->search->setFocus ();
    }

    return (true);
}

bool
MessageWidget::onExportTriggered ()
{
    int row = this->table->currentRow ();
    if ( 0 > row)
    {

        QMessageBox::warning (NULL,
                              NO_SELECTION,
                              NO_SELECTION_MESSAGE,
                              QMessageBox::Ok,
                              QMessageBox::Ok);
        return (false);
    }

    MessageFieldDialog fields;
    if ( QDialog::Rejected == fields.exec ())
    {

        return (false);

    }
    else
    {

        QString fileName = QFileDialog::getSaveFileName (this,
                                                         "Export to CSV",
                                                         QDir::tempPath (),
                                                         "CSV Files (*.csv)");

        if (true == fileName.isNull ())
        {

            return (false);

        }
        else
        {

            QFile file (fileName);

            file.open (QIODevice::WriteOnly | QIODevice::Append);

            QTextStream textStream (&file);

            this->table->setSortingEnabled (false);

            QList<int> indices;
            QList<QTableWidgetSelectionRange> ranges = this->table->selectedRanges ();

            foreach (QTableWidgetSelectionRange range, ranges)
            {

                for (int row = range.topRow (); row <= range.bottomRow (); row++)
                {

                    if (false == this->table->isRowHidden (row))
                    {

                        indices << row;
                    }
                }
            }

            qSort(indices.begin (), indices.end (), qGreater<int> ());

            foreach (int index, indices)
            {

                textStream << this->write (fields.getFields (), index);
            }

            this->table->setSortingEnabled (true);

            file.close ();

            return (true);
        }
    }
}

/// Tree
bool
MessageWidget::createTree ()
{

    this->tree = new QTreeWidget;
    this->tree->setColumnCount (1);
    this->tree->setHeaderLabel ("Messages");

    this->item << new QTreeWidgetItem (this->tree);

    this->item << new QTreeWidgetItem (this->item.at (Message::All));
    this->item << new QTreeWidgetItem (this->item.at (Message::All));

    this->item << new QTreeWidgetItem (this->item.at (Message::All));
    this->item << new QTreeWidgetItem (this->item.at (Message::All));
    this->item << new QTreeWidgetItem (this->item.at (Message::All));
    this->item << new QTreeWidgetItem (this->item.at (Message::All));

    this->item.at (Message::All)->setExpanded (true);

    for (int index = 0; index < this->item.count (); index++)
    {

        this->item[index]->setText (0, Message::Display.at (index));
        this->item[index]->setIcon (0, this->treeIcon.at (index));
        this->item[index]->setToolTip (0, Message::ToolTip.at (index));
        this->item[index]->setStatusTip (0, Message::String.at (index));
    }

    this->tree->setCurrentItem (this->item.at (Message::All));
    this->tree->setColumnWidth (0, 200);

    QObject::connect (this->tree,
                      SIGNAL(currentItemChanged (
                                 QTreeWidgetItem*,
                                 QTreeWidgetItem*)),
                      this,
                      SLOT(onTreeCurrentItemChanged (
                               QTreeWidgetItem*,
                               QTreeWidgetItem*)));

    return (true);
}

bool
MessageWidget::onTreeCurrentItemChanged (
        QTreeWidgetItem* current,
        QTreeWidgetItem* previous)
{
    Q_UNUSED (current);
    Q_UNUSED (previous);

    this->updateTable ();
    this->content->clear ();

    return (true);
}

/// Toolbar
bool MessageWidget::createToolbar ()
{

    this->toolbar = new QToolBar ("Messages");
    this->toolbar->setFixedHeight (36);

    this->toolbar->addAction (this->action.at (Action::New));
    this->toolbar->addAction (this->action.at (Action::Delete));
    this->toolbar->addSeparator ();

    this->toolbar->addAction (this->action.at (Action::Reply));
    this->toolbar->addAction (this->action.at (Action::Forward));
    this->toolbar->addAction (this->action.at (Action::Send));
    this->toolbar->addSeparator ();

    this->toolbar->addAction (this->action.at (Action::Find));
    this->toolbar->addSeparator ();

    this->search = new QLineEdit(this);
    this->searchAction = this->toolbar->addWidget (this->search);
    this->searchAction->setVisible (false);

    QObject::connect (this->search,
                      SIGNAL(textChanged (const QString&)),
                      this,
                      SLOT(onSearchTextChanged (const QString&)));

    return (true);
}

bool
MessageWidget::onSearchTextChanged (
        QString filter)
{

    this->table->setSortingEnabled (false);

    for ( int row = 0; row < this->table->rowCount (); row++ )
    {

        if (this->tree->currentItem ()->statusTip (0).contains (
                this->table->item (row, Message::Type)->text ()))
        {

            bool match = false;

            for ( int column = 0; column < this->table->columnCount (); column++ )
            {

                if (false == this->table->isColumnHidden (column))
                {

                    if (this->table->item (row, column)->text().contains(
                            filter, Qt::CaseInsensitive) )
                    {

                        match = true;
                        break;
                    }
                }
            }
            this->table->setRowHidden( row, !match );
        }

    }

    this->table->setSortingEnabled (true);

    return (true);
}

/// Table
bool
MessageWidget::createTable ()
{

    this->table = new QTableWidget;
    this->table->setColumnCount (Message::FieldCount);

    this->table->setColumnWidth (Message::Name, 150);
    this->table->setColumnWidth (Message::Content, 250);

    this->table->setColumnHidden (Message::Number, true);
    this->table->setColumnHidden (Message::Type, true);
    this->table->setColumnHidden (Message::Index, true);
    this->table->setColumnHidden (Message::Unread, true);

    this->table->setShowGrid (false);
    this->table->setSelectionBehavior (QAbstractItemView::SelectRows);

    this->table->verticalHeader ()->setDefaultSectionSize (18);
    this->table->verticalHeader ()->hide ();

    this->table->horizontalHeader ()->setStretchLastSection (true);
    this->table->setHorizontalHeaderLabels (Message::Header);

    this->table->setContextMenuPolicy (Qt::CustomContextMenu);

    QPalette palette = this->table->palette ();
    QPixmap background (":/message.png");
    palette.setBrush (QPalette::Base, QBrush(background));
    this->table->setPalette (palette);

    this->load ();

    this->table->sortByColumn (Message::Time, Qt::DescendingOrder);

    this->table->addActions (this->action);

    QObject::connect (this->table,
                      SIGNAL(customContextMenuRequested(const QPoint&)),
                      this,
                      SLOT(onContextMenu(const QPoint&)));

    QObject::connect (this->table,
                      SIGNAL(currentItemChanged(
                                 QTableWidgetItem*,
                                 QTableWidgetItem*)),
                      this,
                      SLOT(onTableCurrentItemChanged(
                               QTableWidgetItem*,
                               QTableWidgetItem*)));

    this->updateTree ();

    this->content = new MessageContentWidget;

    return (true);
}

/// Context Menu
bool
MessageWidget::createContextMenu ()
{

    this->menu = new QMenu;

    this->menu->addAction (this->action.at (Action::New));
    this->menu->addAction (this->action.at (Action::Edit));
    this->menu->addAction (this->action.at (Action::Important));
    this->menu->addAction (this->separator.at (Separator::One));

    this->menu->addAction (this->action.at (Action::Delete));
    this->menu->addAction (this->action.at (Action::Recover));
    this->menu->addAction (this->separator.at (Separator::Two));

    this->menu->addAction (this->action.at (Action::Send));
    this->menu->addAction (this->action.at (Action::Reply));
    this->menu->addAction (this->action.at (Action::Forward));
    this->menu->addAction (this->separator.at (Separator::Three));

    this->menu->addAction (this->action.at (Action::Save));
    this->menu->addAction (this->separator.at (Separator::Four));

    this->menu->addAction (this->action.at (Action::Find));
    this->menu->addAction (this->action.at (Action::Export));
    this->menu->addAction (this->separator.at (Separator::Five));

    return (true);
}

bool
MessageWidget::onContextMenu (
        const QPoint& point)
{

    QTableWidgetItem * dataItem = this->table->itemAt (point);

    bool message = (NULL != dataItem);

    bool important =
            ((true == message) &&
             (Message::String.at (Message::Important).contains (
                  this->table->item (dataItem->row (), Message::Type)->text ())));

    bool deleted =
            ((true == message) &&
             (Message::String.at (Message::Deleted).contains (
                  this->table->item (dataItem->row (), Message::Type)->text ())));

    this->action[Action::New]->setEnabled (true);
    this->action[Action::Edit]->setEnabled (true == message);
    this->action[Action::Important]->setEnabled ((true == message) && (false == deleted) && (false == important));

    this->action[Action::Delete]->setEnabled (true == message);
    this->action[Action::Recover]->setEnabled (true == deleted);

    this->action[Action::Send]->setEnabled (true == message);
    this->action[Action::Reply]->setEnabled (true == message);
    this->action[Action::Forward]->setEnabled (true == message);

    this->action[Action::Save]->setEnabled (true == message);

    this->action[Action::Find]->setEnabled (true);
    this->action[Action::Export]->setEnabled (true == message);

    this->menu->exec (this->mapToGlobal (point));
    return (true);
}

bool
MessageWidget::onTableCurrentItemChanged (
        QTableWidgetItem* current,
        QTableWidgetItem* previous)
{
    Q_UNUSED (previous);

    if (NULL == current)
    {

        this->content->clear ();

    }
    else
    {

        this->content->load (this->rowToMessage (this->table->currentRow ()));
    }

    QFont font = this->font ();
    font.setBold (false);

    int row = this->table->currentRow ();
    if (0 > row)
    {
        return (false);
    }

    if (true == this->table->item (row, Message::Unread)->text ().contains (FALSE_INT))
    {
        return (false);
    }

    for (int column = 0; column < Message::FieldCount; column++)
    {
        this->table->item (row, column)->setFont (font);
    }

    this->table->item (row, Message::Unread)->setText (FALSE_INT);

    if ( Message::String.at (Message::All).contains (
             this->table->item (row, Message::Type)->text ()) )
    {

        DeamonDatabase::getInstance ()->editMessage (this->rowToMessage (row));

    }

    this->updateTree ();
    return (true);
}

/// Layout
bool
MessageWidget::createLayout ()
{

    this->reader = new QSplitter(Qt::Vertical);
    this->reader->setChildrenCollapsible (false);

    this->reader->addWidget (this->toolbar);
    this->reader->addWidget(this->table);
    this->reader->addWidget(this->content);

    this->reader->setStretchFactor (1, 0);
    this->reader->setStretchFactor (2, 1);
    this->reader->setStretchFactor (3, 1);

    this->reader->setSizes (QList <int> () << 36 << 200 << 164);

    this->splitter = new QSplitter(Qt::Horizontal);
    this->splitter->setChildrenCollapsible (false);

    this->splitter->addWidget(this->tree);
    this->splitter->addWidget(this->reader);

    this->splitter->setStretchFactor (1, 1);
    this->splitter->setStretchFactor (2, 1);

    this->splitter->setSizes (QList <int> () << 150 << 600);

    this->layout = new QVBoxLayout;
    this->layout->setContentsMargins (0, 0, 0, 0);
    this->layout->addWidget (this->splitter);

    this->setLayout (this->layout);

    return (true);
}

bool
MessageWidget::connect ()
{

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(deliveryReportUpdate(Message)),
                      this,
                      SLOT(addUpdate(Message)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(messageRecievedUpdate(Message)),
                      this,
                      SLOT(addUpdate(Message)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(modemPlugged (bool)),
                      this,
                      SLOT(onModemPlugged (bool)));

    QObject::connect (DeamonConnection::getInstance (),
                      SIGNAL(modemConnected (bool)),
                      this,
                      SLOT(onModemConnected (bool)));

    return (true);
}

/// Helpers
bool
MessageWidget::updateTable ()
{

    this->table->setSortingEnabled (false);

    for (int row = 0; row < this->table->rowCount (); row++)
    {

        this->table->setRowHidden (row, !this->tree->currentItem ()
                                   ->statusTip (0).contains (
                                       this->table->item (
                                           row, Message::Type)->text ()));
    }

    this->table->setSortingEnabled (true);
    this->table->setCurrentCell (-1, -1);

    return (true);
}


bool MessageWidget::onSelectUnread ()
{

    for (int index = Message::Inbox; index < this->item.count (); index++)
    {

        QStringList list = this->item.at (index)->text (0).split (OPEN_PARANTHESIS);

        if (list.at (1).startsWith ('0'))
        {
            continue;
        }
        else
        {
            this->tree->setCurrentItem (this->item.at (index));
            break;
        }
    }

    return (true);
}

bool MessageWidget::updateTree ()
{

    this->table->setSortingEnabled (false);

    int total = 0;

    for (int index = 0; index < this->item.count (); index++)
    {

        int count = 0;
        int unread = 0;

        for (int row = 0; row < this->table->rowCount (); row++)
        {

            if (this->item.at (index)->statusTip (0).contains (

                    this->table->item (row, Message::Type)->text ()))
            {

                count++;

                if (this->table->item (row, Message::Unread)->text ().contains ("1"))
                {
                    unread++;
                }
            }

        }

        this->item.at (index)->setText (0, Message::Display.at (index)
                                        + " (" + QString::number (unread) + "/"
                                        + QString::number (count) +")");

        total += unread;


    }

    emit messageAnnunciator(0 != total);

    this->table->setSortingEnabled (true);

    return (true);
}

bool
MessageWidget::send (
        QString number,
        QString content)
{

    bool result = false;
    emit readContactUpdate (false);

    MessageDialog message(number, content);

    switch (message.exec ())
    {

        case MessageDialog::Send: // Fall Through
        case MessageDialog::Save: {

            this->table->setSortingEnabled (false);

            foreach (Message item, message.getMessages ())
            {

                this->add (item);
            }

            this->updateTable ();
            this->updateTree ();

            this->table->setSortingEnabled (true);

            result = true;
        } break;

        case MessageDialog::Cancel: {
            result = false;
        } break;
    }

    emit readContactUpdate (true);
    return (result);
}

bool
MessageWidget::messageToRow (
        Message message)
{

    int row = this->table->rowCount ();
    this->table->insertRow (row);

    QTableWidgetItem * dataItem = NULL;

    QFont font = this->font ();
    font.setBold (message.getUnread ());

    if (message.getName ().isEmpty ())
    {
        message.setName (message.getNumber ());
    }

    dataItem = new QTableWidgetItem (message.getNumber ());
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    this->table->setItem (row, Message::Number, dataItem);

    dataItem = new QTableWidgetItem (message.getName ());
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    dataItem->setIcon (this->treeIcon.at (message.getType ()));
    this->table->setItem (row, Message::Name, dataItem);

    dataItem = new QTableWidgetItem (message.getContent ());
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    this->table->setItem (row, Message::Content, dataItem);

    dataItem = new QTableWidgetItem (message.getTime ().toString (DATETIME_FORMAT));
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    this->table->setItem (row, Message::Time, dataItem);

    dataItem = new QTableWidgetItem (QString::number (
                                         static_cast<int>(message.getType ())));
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    this->table->setItem (row, Message::Type, dataItem);

    dataItem = new QTableWidgetItem (QString::number (message.getIndex ()));
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    this->table->setItem (row, Message::Index, dataItem);

    dataItem = new QTableWidgetItem (QString::number (
                                         static_cast<int>(message.getUnread ())));
    dataItem->setFlags (Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    dataItem->setFont (font);
    dataItem->setToolTip (message.getContent ());
    dataItem->setTextAlignment (Qt::AlignLeft);
    this->table->setItem (row, Message::Unread, dataItem);

    if (message.getName ().contains (message.getNumber ()))
    {
        emit number (message.getNumber ());
    }

    return (true);
}

Message
MessageWidget::rowToMessage (
        int index)
{

    return (Message (this->table->item (index, Message::Number)->text (),
                     this->table->item (index, Message::Name)->text (),
                     this->table->item (index, Message::Content)->text (),
                     QDateTime::fromString (
                         this->table->item (index, Message::Time)->text (),
                         DATETIME_FORMAT),
                     static_cast<Message::Types> (
                         this->table->item (index,
                                            Message::Type)->text ().toInt ()),
                     this->table->item (index, Message::Index)->text ().toInt (),
                     ( 1 == this->table->item (index,
                                               Message::Unread)->text ().toInt ())));

}

bool
MessageWidget::remove (
        int index)
{

    if (Message::String.at (Message::Deleted).contains (
            this->table->item (index, Message::Type)->text ()))
    {

        DeamonDatabase::getInstance ()->removeMessage (
                    this->table->item(index, Message::Index)->text ().toInt ());
        this->table->removeRow (index);

    }
    else if (Message::String.at (Message::All).contains (
                 this->table->item (index, Message::Type)->text ()))
    {

        this->table->item (index, Message::Type)->setText (
                    Message::String.at (Message::Deleted));
        this->table->item (index, Message::Name)->setIcon (
                    this->treeIcon.at (Message::Deleted));

        DeamonDatabase::getInstance ()->editMessage (
                    this->rowToMessage (index));

    }

    return (true);
}

bool
MessageWidget::recover (
        int index)
{

    if (this->table->item (index, Message::Type)->text ().contains (
            Message::String.at (Message::Deleted)))
    {

        this->table->item (index, Message::Type)->setText (
                    Message::String.at (Message::Inbox));
        this->table->item (index, Message::Name)->setIcon (
                    this->treeIcon.at (Message::Inbox));

        DeamonDatabase::getInstance ()->editMessage (
                    this->rowToMessage (index));
    }

    return (true);
}

bool
MessageWidget::load ()
{

    this->table->setSortingEnabled (false);

    QList <Message> messages = DeamonDatabase::getInstance ()->readMessage ();
    foreach (Message message, messages)
    {

        this->messageToRow (message);
    }

    this->updateTree ();
    this->table->setSortingEnabled (true);
    return (true);
}

bool
MessageWidget::addUpdate (
        Message message)
{

    this->table->setSortingEnabled (false);

    this->add (message);

    this->updateTable ();
    this->updateTree ();

    return (true);
}

bool
MessageWidget::add (
        Message message)
{

    message.setIndex (DeamonDatabase::getInstance ()->addMessage (message));

    this->messageToRow (message);

    return (true);
}

bool
MessageWidget::onModemPlugged (bool status)
{

    this->action[Action::Send]->setEnabled (true == status);
    this->action[Action::Reply]->setEnabled (true == status);
    this->action[Action::Forward]->setEnabled (true == status);

    return (true);
}

bool
MessageWidget::onModemConnected (
        bool status)
{
    Q_UNUSED (status);

    return (true);
}

bool
MessageWidget::name (
        QString number,
        QString name)
{

    this->table->setSortingEnabled (false);

    for (int index = 0; index < this->table->rowCount (); index++)
    {

        if (this->table->item (index, Message::Number)->text ().contains (number))
        {
            this->table->item (index, Message::Name)->setText (name);

            DeamonDatabase::getInstance ()->editMessage (this->rowToMessage (index));
        }
    }

    return (true);
}

QString
MessageWidget::write (
        const QList<bool>& fields,
        int row)
{

    QString result;

    for (int index = 0; index < fields.count (); index++)
    {

        if (true == fields.at (index))
        {

            result += this->table->item (row, index)->text () + COMMA;
        }
    }

    return (result.replace (result.lastIndexOf (COMMA), 1, NEW_LINE_CARRIAGE));
}

bool
MessageWidget::read (
        const QList<bool>& fields,
        const QString& string)
{

    QStringList list = string.split (COMMA);
    Message message;

    if (fields.at (Message::Number))
    {
        message.setNumber (list.at (0));
        list.removeFirst ();
    }

    if (fields.at (Message::Name))
    {
        message.setName (list.at (0));
        list.removeFirst ();
    }

    if (fields.at (Message::Content))
    {
        message.setContent (list.at (0));
        list.removeFirst ();
    }

    if (fields.at (Message::Time))
    {
        message.setTime (QDateTime::fromString (
                             list.at (0),
                             DATETIME_FORMAT));
        list.removeFirst ();
    }

    if (fields.at (Message::Type))
    {
        message.setType (static_cast<Message::Types> (list.at (0).toInt ()));
        list.removeFirst ();
    }

    this->add (message);

    return (true);
}

bool
MessageWidget::initialize ()
{

    this->treeIcon << QIcon(":/local.png")
                   << QIcon(":/inbox.png")
                   << QIcon(":/outbox.png")
                   << QIcon(":/draft.png")
                   << QIcon(":/important.png")
                   << QIcon(":/deleted.png")
                   << QIcon(":/report.png");

    this->actionName << "&New"
                     << "&Edit"
                     << "&Important"
                     << "&Delete"
                     << "&Recover"
                     << "&Send"
                     << "&Reply"
                     << "&Forward"
                     << "&Save Number"
                     << "&Search"
                     << "&Export";

    this->actionToolTip << "Create a new Message"
                        << "Edit Message"
                        << "Mark as Important"
                        << "Delete Message"
                        << "Recover Message"
                        << "Send Message"
                        << "Reply Message"
                        << "Forward Message"
                        << "Save Number"
                        << "Search Message"
                        << "Export Message";

    this->actionIcon << QIcon (":/newMessage.png")
                     << QIcon (":/editContact.png")
                     << QIcon (":/important.png")
                     << QIcon (":/deleteMessage.png")
                     << QIcon (":/deleteMessage.png")
                     << QIcon (":/sendMessage.png")
                     << QIcon (":/replyMessage.png")
                     << QIcon (":/forwardMessage.png")
                     << QIcon (":/saveNumber.png")
                     << QIcon (":/searchMessage.png")
                     << QIcon (":/exportContact.png");

    this->actionShortcut << QKeySequence::New
                         << Qt::CTRL + Qt::Key_E
                         << Qt::CTRL + Qt::Key_I
                         << QKeySequence::Delete
                         << QKeySequence::Undo
                         << Qt::CTRL + Qt::Key_M
                         << Qt::CTRL + Qt::Key_R
                         << Qt::CTRL + Qt::Key_W
                         << QKeySequence::Save
                         << QKeySequence::Find
                         << Qt::CTRL + Qt::Key_X;

    return (true);
}
