/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>

@protocol PXGViewUserData;
@interface PXGViewPayload : NSObject <NSCopying> {

	Class _viewClass;
	id<PXGViewUserData> _userData;

}

@property (nonatomic,readonly) Class viewClass;                                //@synthesize viewClass=_viewClass - In the implementation block
@property (nonatomic,copy,readonly) id<PXGViewUserData> userData;              //@synthesize userData=_userData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PXGViewUserData>)userData;
-(id)initWithViewClass:(Class)arg1 userData:(id)arg2 ;
-(Class)viewClass;
@end
