/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BSProcessHandle;


@protocol BSServiceConnectionContext
@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@required
-(id<NSCopying>)userInfo;
-(BSProcessHandle *)remoteProcess;

@end

