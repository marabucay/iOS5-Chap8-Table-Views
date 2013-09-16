//
//  BIDViewController.h
//  Sections
//
//  Created by Maria Alice C. Lim on 9/16/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController <UITableViewDataSource, UITabBarDelegate>

@property (strong, nonatomic) IBOutlet UITableView *table;
@property (strong, nonatomic) IBOutlet UISearchBar *search;
@property (strong, nonatomic) NSDictionary *allNames;
@property (strong, nonatomic) NSMutableDictionary *names;
@property (strong, nonatomic) NSMutableArray *keys;
@property (assign, nonatomic) BOOL isSearching;
- (void)resetSearch;
- (void)handleSearchForTerm:(NSString *)searchTerm;

@end
