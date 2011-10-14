//
//  SLPickerViewController.h
//  SLPicker
//
//  Created by Thor Frølich on 12/08/11.
//  Copyright 2011 Strange Loop. All rights reserved.
//  http://strangeloop.dk
//

#import <UIKit/UIKit.h>
#import "SLPickerView.h"

@interface SLPickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    SLPickerView *_pickerView;
    NSArray *_pickerData;
    
    NSInteger currentPick;
}

@property (nonatomic, retain) SLPickerView *pickerView;
@property (nonatomic, retain) NSArray *pickerData;

- (void)tapInPickerView:(UIGestureRecognizer *)sender;

@end
