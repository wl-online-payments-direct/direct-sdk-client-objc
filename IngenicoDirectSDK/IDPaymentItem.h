//
// Do not remove or alter the notices in this preamble.
// This software code is created for Ingencio ePayments on 17/07/2020
// Copyright © 2020 Global Collect Services. All rights reserved.
// 

#import "IDBasicPaymentItem.h"

@class IDPaymentItemDisplayHints;
@class IDAccountsOnFile;
@class IDPaymentProductFields;
@class IDPaymentProductField;

@protocol IDPaymentItem <NSObject, IDBasicPaymentItem>

@property (strong, nonatomic) IDPaymentProductFields *fields;

- (IDPaymentProductField *)paymentProductFieldWithId:(NSString *)paymentProductFieldId;

@end
