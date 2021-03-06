/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHResourceAvailabilityRequest.h>

@protocol PHResourceRepairRequestDelegate;
@class NSSet;

@interface PHResourceRepairRequest : PHResourceAvailabilityRequest {

	id<PHResourceRepairRequestDelegate> _delegate;
	NSSet* _errorCodesToRepair;

}

@property (nonatomic,retain) NSSet * errorCodesToRepair;                                       //@synthesize errorCodesToRepair=_errorCodesToRepair - In the implementation block
@property (assign,nonatomic,__weak) id<PHResourceRepairRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)appyCorrectionsToResource:(id)arg1 assetObjectID:(id)arg2 errorCodes:(id)arg3 context:(id)arg4 ;
-(id<PHResourceRepairRequestDelegate>)delegate;
-(void)setDelegate:(id<PHResourceRepairRequestDelegate>)arg1 ;
-(id)plistDictionary;
-(void)runDaemonSide;
-(void)_handleRepairFinishedNotification:(id)arg1 ;
-(id)_errorCodesFromErrors:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithResource:(id)arg1 assetObjectID:(id)arg2 validationErrors:(id)arg3 ;
-(id)initWithDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4 validationErrors:(id)arg5 ;
-(NSSet *)errorCodesToRepair;
-(void)setErrorCodesToRepair:(NSSet *)arg1 ;
@end

