//
//  PGBaseTableViewController.m
//  BaseDataSource
//
//  Created by piggybear on 2016/11/21.
//  Copyright © 2016年 piggybear. All rights reserved.
//

#import "PGBaseTableViewController.h"
#import "PGBaseDataSource.h"

@interface PGBaseTableViewController ()

@end

@implementation PGBaseTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.tableView.dataSource = [PGBaseDataSource instance];
}

@end
