//
//  ViewController.h
//  2Alcolator
//
//  Created by Jeff Kral on 10/12/16.
//  Copyright © 2016 Jeff Kral. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;


@end

