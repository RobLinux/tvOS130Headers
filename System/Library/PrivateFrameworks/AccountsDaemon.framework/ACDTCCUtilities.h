/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@interface ACDTCCUtilities : NSObject
+(CFStringRef)_TCCServiceForAccountTypeID:(id)arg1 ;
+(int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(BOOL)TCCSupportedForAccountTypeID:(id)arg1 ;
+(BOOL)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(BOOL)arg3 ;
+(BOOL)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(id)allTCCStatesForAccountTypeID:(id)arg1 ;
+(BOOL)clearAllTCCStatesForAccountTypeID:(id)arg1 ;
@end

