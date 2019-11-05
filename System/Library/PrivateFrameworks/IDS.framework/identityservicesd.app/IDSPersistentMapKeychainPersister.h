/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPersistentMapPersister.h>

@class NSString, IDSKeychainWrapper, IMSystemMonitor;

@interface IDSPersistentMapKeychainPersister : NSObject <IDSPersistentMapPersister> {

	NSString* _identifier;
	IDSKeychainWrapper* _keychainWrapper;
	IMSystemMonitor* _systemMonitor;

}

@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IDSKeychainWrapper * keychainWrapper;              //@synthesize keychainWrapper=_keychainWrapper - In the implementation block
@property (nonatomic,readonly) IMSystemMonitor * systemMonitor;                   //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(id)data;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isAvailable;
-(IMSystemMonitor *)systemMonitor;
-(IDSKeychainWrapper *)keychainWrapper;
-(id)initWithIdentifier:(id)arg1 keychainWrapper:(id)arg2 systemMonitor:(id)arg3 ;
-(void)saveData:(id)arg1 ;
-(void)purgeData;
@end

