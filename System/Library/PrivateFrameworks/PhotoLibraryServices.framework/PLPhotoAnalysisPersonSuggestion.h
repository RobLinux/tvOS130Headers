/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject {

	BOOL _confirmed;
	long long _keyFaceClusterSequenceNumber;
	NSString* _keyFaceLocalIdentifier;
	NSString* _personLocalIdentifier;
	long long _personFaceCount;

}

@property (nonatomic,readonly) long long keyFaceClusterSequenceNumber;              //@synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyFaceLocalIdentifier;              //@synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) long long personFaceCount;                           //@synthesize personFaceCount=_personFaceCount - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                                      //@synthesize confirmed=_confirmed - In the implementation block
-(id)description;
-(BOOL)confirmed;
-(id)initWithSuggestionDictionary:(id)arg1 ;
-(id)suggestionDictionaryRepresentation;
-(long long)keyFaceClusterSequenceNumber;
-(NSString *)keyFaceLocalIdentifier;
-(NSString *)personLocalIdentifier;
-(long long)personFaceCount;
@end

