/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <LocationSupport/NSCopying.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)main;
+(void)setGlobalConfiguration:(id)arg1 ;
+(id)globalConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(void)resume;
-(void)suspend;
-(id)initWithIdentifier:(id)arg1 ;
-(id)newTimer;
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(void)assertOutside;
-(double)currentLatchedAbsoluteTimestamp;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
@end

