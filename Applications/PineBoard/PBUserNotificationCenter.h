/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/SSErrorHandlerDelegate.h>

@protocol PBUserNotificationDelegate;
@class SSErrorHandler, NSMutableDictionary, NSString;

@interface PBUserNotificationCenter : NSObject <SSErrorHandlerDelegate> {

	BOOL _connected;
	id<PBUserNotificationDelegate> _delegate;
	SSErrorHandler* _errorHandler;
	NSMutableDictionary* _registeredOperationClasses;

}

@property (assign,nonatomic,__weak) id<PBUserNotificationDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SSErrorHandler * errorHandler;                                 //@synthesize errorHandler=_errorHandler - In the implementation block
@property (getter=isConnected) BOOL connected;                                              //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredOperationClasses;              //@synthesize registeredOperationClasses=_registeredOperationClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initializeNotificationCenterWithDelegate:(id)arg1 ;
-(id<PBUserNotificationDelegate>)delegate;
-(void)setDelegate:(id<PBUserNotificationDelegate>)arg1 ;
-(void)setErrorHandler:(SSErrorHandler *)arg1 ;
-(SSErrorHandler *)errorHandler;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)errorHandler:(id)arg1 handleSession:(id)arg2 ;
-(void)errorHandlerDidDisconnect:(id)arg1 ;
-(void)startUserNotificationCenter;
-(void)initializeStoreErrorHandler;
-(NSMutableDictionary *)registeredOperationClasses;
-(void)setRegisteredOperationClasses:(NSMutableDictionary *)arg1 ;
-(void)startErrorHandler;
-(void)_handleCVVCheck:(id)arg1 ;
-(void)_handle2SVCheck:(id)arg1 ;
-(void)_handleCarMCheck:(id)arg1 ;
-(id)cfUserNotificationForToken:(int)arg1 ;
-(void)_didHandleCFUserNotification:(id)arg1 ;
-(void)registerOperationClass:(Class)arg1 forFailureType:(long long)arg2 ;
-(void)stopErrorHandler;
@end

