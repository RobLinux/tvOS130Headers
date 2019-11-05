/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelLibrarySearchScope, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibrarySearchEntityResultContainer : NSObject {

	MPModelLibrarySearchScope* _scope;
	MPMediaLibraryEntityTranslationContext* _entityTranslationContext;
	shared_ptr<mlcore::EntityQueryResult>* _entityQueryResult;

}

@property (nonatomic,readonly) shared_ptr<mlcore::EntityQueryResult>* entityQueryResult;                       //@synthesize entityQueryResult=_entityQueryResult - In the implementation block
@property (nonatomic,copy,readonly) MPModelLibrarySearchScope * scope;                                         //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) MPMediaLibraryEntityTranslationContext * entityTranslationContext;              //@synthesize entityTranslationContext=_entityTranslationContext - In the implementation block
-(MPModelLibrarySearchScope *)scope;
-(MPMediaLibraryEntityTranslationContext *)entityTranslationContext;
-(shared_ptr<mlcore::EntityQueryResult>*)entityQueryResult;
-(id)initWithEntityQueryResult:(shared_ptr<mlcore::EntityQueryResult>*)arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3 ;
@end

