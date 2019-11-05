/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {

	CHLogger* _logger;
	CHSynchronizable* _synchronizable;

}
-(id)queue;
-(id)initWithName:(const char*)arg1 ;
-(id)logHandle;
-(void)execute:(/*^block*/id)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 queue:(id)arg2 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
@end
