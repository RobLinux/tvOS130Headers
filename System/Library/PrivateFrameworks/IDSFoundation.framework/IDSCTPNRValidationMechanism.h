/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/NSCopying.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying> {

	long long _type;
	NSString* _context;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
+(id)SMSMechanismWithContext:(id)arg1 ;
+(id)SMSLessMechanism;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)type;
-(NSString *)context;
-(id)initWithType:(long long)arg1 context:(id)arg2 ;
@end

