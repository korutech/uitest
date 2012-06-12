//
//  KTMasterViewController.h
//  uitesting
//
//  Created by Shane Davis on 1/06/12.
//  Copyright (c) 2012 Korutech App Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KTMasterViewController : UITableViewController

@property (nonatomic, retain) UIAlertView			*loginAlert;

-(void)showLoginAlert;
-(void)handleLoginAlert:(NSInteger)buttonIndex;

@end
