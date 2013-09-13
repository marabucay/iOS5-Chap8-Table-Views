//
//  BIDViewController.h
//  Simple Table
//
//  Created by Maria Alice C. Lim on 9/13/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) NSArray *listData;

@end
