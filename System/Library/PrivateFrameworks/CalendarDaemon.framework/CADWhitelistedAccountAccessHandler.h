/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADAccountAccessHandler.h>

@protocol CADACAccountsProvider;
@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	id<CADACAccountsProvider> _accountsProvider;

}

@property (nonatomic,readonly) id<CADACAccountsProvider> accountsProvider;              //@synthesize accountsProvider=_accountsProvider - In the implementation block
-(void)reset;
-(id<CADACAccountsProvider>)accountsProvider;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(id)initWithAccountsProvider:(id)arg1 ;
@end
