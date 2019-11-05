/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AMSBagValue, NSString, NSObject;

@interface URLBagMemoizedValue : NSObject {

	AMSBagValue* _bagValue;
	NSString* _bagKey;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isMemoized;
	id _memoizedValue;

}
-(id)valueWithError:(id*)arg1 ;
-(void)_handleBagChangedNotification:(id)arg1 ;
-(id)initWithBagValue:(id)arg1 bagKey:(id)arg2 ;
@end
