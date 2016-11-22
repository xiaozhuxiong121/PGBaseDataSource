//
//  PGTableViewController.m
//  BaseDataSource
//
//  Created by piggybear on 2016/11/21.
//  Copyright © 2016年 piggybear. All rights reserved.
//

#import "PGTableViewController.h"
#import "PGBaseDataSource.h"
#import "PGTableViewCell.h"

@interface PGTableViewController ()

@end

static NSString *const CellReuseIdentifier = @"PGTableViewCell";

@implementation PGTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    [self.tableView registerNib:[UINib nibWithNibName:@"PGTableViewCell" bundle:nil] forCellReuseIdentifier:CellReuseIdentifier];
    [self setupDataSource];
}

- (void)setupDataSource {
    [[PGBaseDataSource instance] numberOfSectionsInTableView:^NSUInteger(UITableView *tableView) {
        return 1;
    } numberOfRowsInSection:^NSUInteger(UITableView *tableView, NSInteger section) {
        return 10;
    } cellForRowAtIndexPath:^UITableViewCell *(UITableView *tableView, NSIndexPath *indexPath) {
        PGTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellReuseIdentifier];
        return cell;
    }];
}

@end
