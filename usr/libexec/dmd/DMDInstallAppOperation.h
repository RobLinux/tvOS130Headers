/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDAppOperation.h>

@class DMDAppMetadata;

@interface DMDInstallAppOperation : DMDAppOperation {

	DMDAppMetadata* _metadata;

}

@property (nonatomic,retain) DMDAppMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)requiredEntitlements;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
+(id)whitelistedClassesForRequest;
-(DMDAppMetadata *)metadata;
-(void)setMetadata:(DMDAppMetadata *)arg1 ;
-(void)runWithRequest:(id)arg1 ;
-(void)_runWithRequest:(id)arg1 ;
-(void)_resumeInstallationForRequest:(id)arg1 ;
-(void)installAppForRequest:(id)arg1 ;
@end

