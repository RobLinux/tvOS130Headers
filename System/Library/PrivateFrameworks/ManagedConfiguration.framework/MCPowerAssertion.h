/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion {

	BOOL _parked;

}

@property (getter=isParked,nonatomic,readonly) BOOL parked;              //@synthesize parked=_parked - In the implementation block
-(id)init;
-(void)dealloc;
-(void)unpark;
-(void)park;
-(BOOL)isParked;
@end
