//
//  KTDetailViewController.h
//  uitesting
//
//  Created by Shane Davis on 1/06/12.
//  Copyright (c) 2012 Korutech App Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
