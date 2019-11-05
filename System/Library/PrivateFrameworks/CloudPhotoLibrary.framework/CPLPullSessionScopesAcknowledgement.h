/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate {

	CPLChangeBatch* _scopesChangeBatch;

}

@property (nonatomic,readonly) CPLChangeBatch * scopesChangeBatch;              //@synthesize scopesChangeBatch=_scopesChangeBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)statusDescription;
-(id)initWithStore:(id)arg1 scopesChangeBatch:(id)arg2 ;
-(CPLChangeBatch *)scopesChangeBatch;
@end
