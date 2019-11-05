/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@interface MPModelMovieKind : MPModelKind {

	unsigned long long _variants;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long variants;              //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) unsigned long long options;               //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)variants;
-(id)humanDescription;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
@end

