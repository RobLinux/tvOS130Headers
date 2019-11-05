/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPersistentMapPersister.h>

@class NSString, IDSKeychainWrapper, IMSystemMonitor;

@interface IDSPersistentMapDiskPersister : NSObject <IDSPersistentMapPersister> {

	NSString* _identifier;
	IDSKeychainWrapper* _keychainWrapper;
	IMSystemMonitor* _systemMonitor;
	NSString* _directory;
	long long _dataProtectionClass;

}

@property (nonatomic,retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) IDSKeychainWrapper * keychainWrapper;              //@synthesize keychainWrapper=_keychainWrapper - In the implementation block
@property (nonatomic,retain) IMSystemMonitor * systemMonitor;                   //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,retain) NSString * directory;                              //@synthesize directory=_directory - In the implementation block
@property (assign,nonatomic) long long dataProtectionClass;                     //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(id)data;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)directory;
-(BOOL)isAvailable;
-(long long)dataProtectionClass;
-(void)setDataProtectionClass:(long long)arg1 ;
-(IMSystemMonitor *)systemMonitor;
-(void)setSystemMonitor:(IMSystemMonitor *)arg1 ;
-(void)setDirectory:(NSString *)arg1 ;
-(IDSKeychainWrapper *)keychainWrapper;
-(void)setKeychainWrapper:(IDSKeychainWrapper *)arg1 ;
-(id)initWithIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 keychainWrapper:(id)arg3 systemMonitor:(id)arg4 ;
-(void)saveData:(id)arg1 ;
-(void)purgeData;
-(id)initWithIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 keychainWrapper:(id)arg3 systemMonitor:(id)arg4 fileDirectory:(id)arg5 ;
@end

