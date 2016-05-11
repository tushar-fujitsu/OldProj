//
//  DetailViewController.h
//  BackToOld
//
//  Created by Tushar Limaye on 11/05/16.
//  Copyright © 2016 Tushar Limaye. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

