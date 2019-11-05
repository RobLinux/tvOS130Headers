/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXPeopleBootstrap : NSObject
+(CGSize)preferredBootstrapSize;
+(void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)_addToPeopleAlbumWithChangeRequest:(id)arg1 ;
+(void)_favoritePersonWithChangeRequest:(id)arg1 ;
+(void)_unfavoritePersonWithChangeRequest:(id)arg1 ;
+(void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3 ;
@end

