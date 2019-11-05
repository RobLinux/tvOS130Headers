/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding> {

	BOOL _enabled;
	NSDecimalNumber* _threshold;

}

@property (nonatomic,retain) NSDecimalNumber * threshold;                //@synthesize threshold=_threshold - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setThreshold:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)threshold;
-(id)initWithThreshold:(id)arg1 isEnabled:(BOOL)arg2 ;
@end

