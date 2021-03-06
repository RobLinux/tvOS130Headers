/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitBackingStore/HMFLogging.h>

@class HMBLocalZone, HMBLocalSQLContextInputBlock, HMFActivity, NSString;

@interface HMBMirrorInput : HMFObject <HMFLogging> {

	HMBLocalZone* _localZone;
	HMBLocalSQLContextInputBlock* _block;
	HMFActivity* _activity;

}

@property (nonatomic,__weak,readonly) HMBLocalZone * localZone;                   //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLContextInputBlock * block;              //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                            //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(HMFActivity *)activity;
-(HMBLocalSQLContextInputBlock *)block;
-(id)abort;
-(id)logIdentifier;
-(HMBLocalZone *)localZone;
-(id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3 ;
-(id)removeModelWithModelID:(id)arg1 ;
-(id)commitWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)removeModelWithExternalID:(id)arg1 ;
-(id)initWithLocalZone:(id)arg1 block:(id)arg2 ;
-(id)updateModelData:(id)arg1 modelEncoding:(unsigned long long)arg2 externalID:(id)arg3 externalData:(id)arg4 ;
@end

