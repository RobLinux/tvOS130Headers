/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)accessories;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)allowUnauthenticatedRequests;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
@end

