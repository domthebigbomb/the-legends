//
//  CreateGameViewController.h
//  CardsAgainstTheEnvironment
//
//  Created by Dominic Ong on 9/13/14.
//  Copyright (c) 2014 Dominic Ong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
@interface CreateGameViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) PFUser *user;

@end
