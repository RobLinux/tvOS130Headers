/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSLock;

@interface ACDDataclassOwnersManager : NSObject {

	NSXPCConnection* _connection;
	NSLock* _connectionLock;

}
-(id)init;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id*)arg4 ;
-(void)preloadDataclassOwnersWithError:(id*)arg1 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3 ;
-(id)_dataclassOwnersManagerConnection;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3 ;
@end

