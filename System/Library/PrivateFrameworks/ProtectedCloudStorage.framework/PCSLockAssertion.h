/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject {

	BOOL _held;
	NSString* _name;
	PCSLockManager* _manager;

}

@property (retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (retain) PCSLockManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign) BOOL held;                             //@synthesize held=_held - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(PCSLockManager *)manager;
-(void)setManager:(PCSLockManager *)arg1 ;
-(id)initAssertion:(id)arg1 manager:(id)arg2 ;
-(BOOL)holdAssertion;
-(void)dropAssertion;
-(BOOL)held;
-(void)setHeld:(BOOL)arg1 ;
@end

