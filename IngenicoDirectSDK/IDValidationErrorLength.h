//
// Do not remove or alter the notices in this preamble.
// This software code is created for Ingencio ePayments on 17/07/2020
// Copyright © 2020 Global Collect Services. All rights reserved.
//

#import "IDValidationError.h"

@interface IDValidationErrorLength : IDValidationError

@property (nonatomic) NSInteger minLength;
@property (nonatomic) NSInteger maxLength;

@end