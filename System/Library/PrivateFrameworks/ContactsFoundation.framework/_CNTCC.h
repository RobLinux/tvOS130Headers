/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <ContactsFoundation/CNTCC.h>

@interface _CNTCC : NSObject <CNTCC>
+(const CFStringRef)TCCServiceForCNTCCService:(long long)arg1 ;
+(long long)CNTCCAccessPreflightForTCCAccessPreflightResult:(int)arg1 ;
+(id)stringForCNTCCService:(long long)arg1 ;
+(id)stringForCNTCCAccessPreflight:(long long)arg1 ;
-(long long)accessPreflightForService:(long long)arg1 ;
-(BOOL)isAccessRestrictedForService:(long long)arg1 ;
-(void)requestAccessForService:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)accessCheckAuditToken:(SCD_Struct_CN1)arg1 forService:(long long)arg2 ;
@end

