//
// Do not remove or alter the notices in this preamble.
// This software code is created for Ingencio ePayments on 17/07/2020
// Copyright © 2020 Global Collect Services. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IDDisplayElement;

@interface IDDisplayElementsConverter : NSObject

-(IDDisplayElement *)displayElementFromJSON:(NSDictionary *)json;
-(NSArray<IDDisplayElement *> *)displayElementsFromJSON:(NSArray *)json;

@end
