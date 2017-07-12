# PGBaseDataSource
将dataSource分离出去，减小TableViewController的体积。

# CocoaPods安装
``` pod 'PGBaseDataSource ```  

## 一般普通的写法

```Objective-C
#pragma mark UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 10;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    PGTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellReuseIdentifier];
    return cell;
}
```
## PGBaseDataSource的写法

``` OC
//设置dataSource
self.tableView.dataSource = [PGBaseDataSource instance];
```
```Objective-C
[[PGBaseDataSource instance] numberOfSectionsInTableView:^NSUInteger(UITableView *tableView) {
    return 1;
} numberOfRowsInSection:^NSUInteger(UITableView *tableView, NSInteger section) {
    return 10;
} cellForRowAtIndexPath:^UITableViewCell *(UITableView *tableView, NSIndexPath *indexPath) {
    PGTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellReuseIdentifier];
    return cell;
}];
```
# Github Address    
https://github.com/xiaozhuxiong121/PGBaseDataSource
