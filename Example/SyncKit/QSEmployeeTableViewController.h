//
//  QSEmployeeTableViewController.h
//  SyncKit
//
//  Created by Manuel Entrena on 01/08/2016.
//  Copyright © 2016 Manuel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class QSCompany;

@interface QSEmployeeTableViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) QSCompany *company;

@end
