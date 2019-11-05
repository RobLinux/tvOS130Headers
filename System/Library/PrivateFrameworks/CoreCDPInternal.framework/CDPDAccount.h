/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDAccount : NSObject

@property (assign,nonatomic) BOOL hasDisabledKeychainExplicitly; 
+(id)sharedInstance;
-(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
-(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(BOOL)hasDisabledKeychainExplicitly;
-(void)setHasDisabledKeychainExplicitly:(BOOL)arg1 ;
@end
