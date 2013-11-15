//
//  MasterViewController.h
//  Course Books
//
//  Created by Rostislav Raykov on 11/15/13.
//  Copyright (c) 2013 publicable. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddBookViewController.h"
#import "SimpleBookManager.h"

@interface MasterViewController : UITableViewController <AddBookViewControllerDelegate>

@property (strong, nonatomic) SimpleBookManager* bookManager;

@end
