/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>
#import <HomeKit/HMObjectMerge.h>
#import <HomeKit/HMMutableApplicationData.h>

@class NSUUID, HMApplicationData, HMFUnfairLock, NSString, HMHome, _HMContext, NSArray;

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	NSUUID* _uuid;
	HMHome* _home;
	HMApplicationData* _applicationData;
	_HMContext* _context;

}

@property (nonatomic,retain) _HMContext * context;                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)init;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(HMApplicationData *)applicationData;
-(NSArray *)accessories;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)applicationDataIdentifier;
-(void)_updateRoomName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

