//
// Do not remove or alter the notices in this preamble.
// This software code is created for Ingencio ePayments on 17/07/2020
// Copyright © 2020 Global Collect Services. All rights reserved.
//

#import  "IDBasicPaymentProductConverter.h"
#import  "IDPaymentProduct.h"
#import  "IDPaymentItemConverter.h"

@interface IDPaymentProductConverter : IDBasicPaymentProductConverter

- (IDPaymentProduct *)paymentProductFromJSON:(NSDictionary *)rawProduct;

@end
