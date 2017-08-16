//
//  DetailViewController.h
//  EveryDoItAgain
//
//  Created by Jaewon Kim on 2017-08-16.
//  Copyright © 2017 Jaewon Kim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EveryDoItAgain+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

