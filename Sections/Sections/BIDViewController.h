//
//  BIDViewController.h
//  Sections
//
//  Created by Maria Alice C. Lim on 9/16/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController <UITableViewDataSource, UITabBarDelegate>

@property(strong,nonatomic) NSDictionary *names;
@property(strong, nonatomic) NSArray *keys;

@end
