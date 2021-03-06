/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libPPM.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOKitUserClientInterface, NSString;

@interface PPMClient : NSObject {

	unsigned connect;
	unsigned version;
	IOKitUserClientInterface* userClient;
	NSString* identifier;

}

@property (retain) IOKitUserClientInterface * userClient; 
@property (assign) unsigned connect; 
@property (retain) NSString * identifier; 
@property (assign) unsigned version; 
+(id)sharedInstanceWithClientRepresentation:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sharedInstanceWithClientRepresentation:(id)arg1 error:(id*)arg2 ;
-(NSString *)identifier;
-(unsigned)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)connect;
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)setupIOKitUserClientWith:(id)arg1 error:(id*)arg2 ;
-(void)setUserClient:(IOKitUserClientInterface *)arg1 ;
-(void)setupClientNumbers;
-(int)getClientNumber:(id)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)registerForNotificationsWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)initWithClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)admissionCheckWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)activityStoppedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)endInteraction:(id*)arg1 ;
-(BOOL)activityStartedWithLevel:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBudgetWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPendingWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDebugFlagWithValue:(id)arg1 error:(id*)arg2 ;
-(IOKitUserClientInterface *)userClient;
@end

