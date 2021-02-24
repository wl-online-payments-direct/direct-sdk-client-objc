//
// Do not remove or alter the notices in this preamble.
// This software code is created for Ingencio ePayments on 17/07/2020
// Copyright © 2020 Global Collect Services. All rights reserved.
// 

#import  "IDPaymentContext.h"
#import  "IDSDKConstants.h"
#import  "IDPaymentAmountOfMoney.h"

@implementation IDPaymentContext

- (instancetype)initWithAmountOfMoney:(IDPaymentAmountOfMoney *)amountOfMoney isRecurring:(BOOL)isRecurring countryCode:(NSString *)countryCode {
    if ([kIDCountryCodes rangeOfString:countryCode].location == NSNotFound) {
        [NSException raise:@"Invalid country code" format:@"Country code %@ is invalid", countryCode];
    }
    
    self = [super init];
    if (self) {
        self.amountOfMoney = amountOfMoney;
        _isRecurring = isRecurring;
        _countryCode = countryCode;
    }
    self.forceBasicFlow = YES;
    NSString *localeCountryCode = [[NSLocale currentLocale] objectForKey: NSLocaleCountryCode];
    if (localeCountryCode != nil) {
        self.locale = [[[[NSLocale currentLocale] objectForKey: NSLocaleLanguageCode] stringByAppendingString:@"_"] stringByAppendingString:localeCountryCode];
    } else {
        self.locale = [[NSLocale currentLocale] objectForKey: NSLocaleLanguageCode];
    }
    
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"%@-%@-%@", self.amountOfMoney.description, self.countryCode, self.isRecurring ? @"YES" : @"NO"];
}

@end

