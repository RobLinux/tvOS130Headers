/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDAppOperation.h>

@class DMDAppMetadata;

@interface DMDMDMv1StartManagingAppOperation : DMDAppOperation {

	DMDAppMetadata* _metadata;

}

@property (nonatomic,retain) DMDAppMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)requiredEntitlements;
+(id)whitelistedClassesForRequest;
-(DMDAppMetadata *)metadata;
-(void)setMetadata:(DMDAppMetadata *)arg1 ;
-(void)runWithRequest:(id)arg1 ;
-(void)_runWithRequest:(id)arg1 ;
-(void)_manageApp;
-(void)_attemptSINFSwap;
-(void)_endOperationWithBundleIdentifier:(id)arg1 ;
-(void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
@end

