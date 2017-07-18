//
//  PGBaseDataSource.h
//
//  Created by piggybear on 2016/11/17.
//  Copyright © 2016年 piggybear. All rights reserved.
//  GitHub Address: https://github.com/xiaozhuxiong121/PGBaseDataSource

#import <UIKit/UIKit.h>

typedef NSUInteger (^NumberOfSectionsInTableView)(UITableView *tableView);
typedef NSUInteger (^NumberOfRowsInSection)(UITableView *tableView, NSInteger section);
typedef UITableViewCell* (^CellForRowAtIndexPath)(UITableView *tableView, NSIndexPath *indexPath);

typedef NSString *(^TitleForHeaderInSection)(UITableView *tableView, NSInteger section);
typedef NSString *(^TitleForFooterInSection)(UITableView *tableView, NSInteger section);


typedef BOOL (^CanEditRowAtIndexPath)(UITableView *tableView, NSIndexPath *indexPath);
typedef BOOL (^CanMoveRowAtIndexPath)(UITableView *tableView, NSIndexPath *indexPath);

typedef NSArray<NSString *> * (^SectionIndexTitlesForTableView)(UITableView *tableView);
typedef NSInteger (^SectionForSectionIndexTitle)(UITableView *tableView, NSString *title, NSInteger index);

typedef void (^CommitEditingStyle)(UITableView *tableView, UITableViewCellEditingStyle editingStyle, NSIndexPath *indexPath);
typedef void (^MoveRowAtIndexPath)(UITableView *tableView, NSIndexPath *sourceIndexPath, NSIndexPath *destinationIndexPath);

@interface PGBaseDataSource : NSObject<UITableViewDataSource>

+ (instancetype)instance;

- (void)numberOfSectionsInTableView:(NumberOfSectionsInTableView)numberOfSectionsInTableView
              numberOfRowsInSection:(NumberOfRowsInSection)numberOfRowsInSection
              cellForRowAtIndexPath:(CellForRowAtIndexPath)cellForRowAtIndexPath;

- (void)titleForHeaderInSection:(TitleForHeaderInSection)titleForHeaderInSection
        titleForFooterInSection:(TitleForFooterInSection)titleForFooterInSection;

- (void)canEditRowAtIndexPath:(CanEditRowAtIndexPath)canEditRowAtIndexPath
        canMoveRowAtIndexPath:(CanMoveRowAtIndexPath)canMoveRowAtIndexPath;

- (void)sectionIndexTitlesForTableView:(SectionIndexTitlesForTableView)sectionIndexTitlesForTableView
           sectionForSectionIndexTitle:(SectionForSectionIndexTitle)sectionForSectionIndexTitle;

- (void)commitEditingStyle:(CommitEditingStyle)commitEditingStyle
        moveRowAtIndexPath:(MoveRowAtIndexPath)moveRowAtIndexPath;

@end
