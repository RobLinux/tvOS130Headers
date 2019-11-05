/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PLMetricEvent.h>

@class PGGraph, PGManager, NSString, NSDictionary;

@interface PGGraphStatisticsMetricEvent : NSObject <PLMetricEvent> {

	BOOL _hasMeNode;
	BOOL _hasNamedMeNode;
	BOOL _hasMusicData;
	BOOL _hasMeHomeNode;
	BOOL _hasMeWorkNode;
	PGGraph* _graph;
	PGManager* _manager;
	NSString* _identifier;
	unsigned long long _librarySize;
	long long _librarySizeRange;
	unsigned long long _numberOfMoments;
	unsigned long long _numberOfBusinessNodes;
	unsigned long long _numberOfMomentsLinkedToABusinessNode;
	double _ratioOfMomentsLinkedToABusinessNode;
	unsigned long long _numberOfMeaningfulMoments;
	double _ratioOfMeaningfulMoments;
	unsigned long long _numberOfMeaningfulMomentsGathering;
	unsigned long long _numberOfMeaningfulMomentsActivity;
	unsigned long long _numberOfMeaningfulMomentsActivityBeach;
	unsigned long long _numberOfMeaningfulMomentsActivityDiving;
	unsigned long long _numberOfMeaningfulMomentsActivityHiking;
	unsigned long long _numberOfMeaningfulMomentsActivityClimbing;
	unsigned long long _numberOfMeaningfulMomentsActivityWinterSport;
	unsigned long long _numberOfMeaningfulMomentsEntertainment;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentAmusementPark;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentNightOut;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentPerformance;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentConcert;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentFestival;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentTheater;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentDance;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentMuseum;
	unsigned long long _numberOfMeaningfulMomentsEntertainmentSportEvent;
	unsigned long long _numberOfMeaningfulMomentsCelebration;
	unsigned long long _numberOfMeaningfulMomentsCelebrationAnniversary;
	unsigned long long _numberOfMeaningfulMomentsCelebrationBirthday;
	unsigned long long _numberOfMeaningfulMomentsCelebrationHolidayEvent;
	unsigned long long _numberOfMeaningfulMomentsCelebrationWedding;
	unsigned long long _numberOfMeaningfulMomentsRestaurant;
	unsigned long long _numberOfMeaningfulMomentsRestaurantBreakfast;
	unsigned long long _numberOfMeaningfulMomentsRestaurantLunch;
	unsigned long long _numberOfMeaningfulMomentsRestaurantDinner;
	unsigned long long _numberOfPublicEvents;
	unsigned long long _numberOfPublicEventsCategoryMusicConcerts;
	unsigned long long _numberOfPublicEventsCategoryNightLife;
	unsigned long long _numberOfPublicEventsCategoryTheater;
	unsigned long long _numberOfPublicEventsCategoryDance;
	unsigned long long _numberOfPublicEventsCategoryFestivalsAndFairs;
	unsigned long long _numberOfPublicEventsCategoryArtsAndMuseums;
	unsigned long long _numberOfPublicEventsCategorySports;
	unsigned long long _numberOfPublicEventsCategoryBusinessAndTechnology;
	unsigned long long _numberOfPublicEventsCategoryCommunity;
	unsigned long long _numberOfPublicEventsCategoryEducational;
	unsigned long long _numberOfPublicEventsCategoryFamilyEvents;
	unsigned long long _numberOfPublicEventsCategoryTours;
	unsigned long long _numberOfPublicEventsCategoryAppleEvents;
	unsigned long long _numberOfMomentsLinkedToAPublicEvent;
	double _ratioOfMomentsLinkedToAPublicEvent;
	unsigned long long _numberOfSignificantMoments;
	double _ratioOfSignificantMoments;
	double _ratioOfDaysWithASignificantEventPastYear;
	double _averageDurationBetweenTwoSignificantEvents;
	unsigned long long _numberOfPeople;
	double _ratioOfPeopleLinkedToContact;
	double _ratioOfPeopleNotLinkedToContact;
	double _ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion;
	double _ratioOfFavoritedPeople;
	double _ratioOfPeopleWithExplicitBirthdayDate;
	double _ratioOfPeopleWithInferredBirthdayDate;
	unsigned long long _numberOfSocialGroups;
	double _ratioOfPeoplePartOfASocialGroup;
	double _ratioOfTwoPeopleSocialGroup;
	unsigned long long _maximumSocialGroupSize;
	double _averageSocialGroupSize;
	unsigned long long _numberOfMusicSessions;
	unsigned long long _maximumMusicSessionSize;
	double _averageMusicSessionSize;
	unsigned long long _numberOfMomentsAtMyHome;
	unsigned long long _numberOfMomentsAtMyWork;
	double _ratioOfMomentsAtMyHome;
	double _ratioOfMomentsAtMyWork;
	double _ratioOfMomentsAtAFrequentLocation;
	unsigned long long _numberOfFrequentLocations;
	unsigned long long _numberOfFrequentLocationsCities;
	unsigned long long _numberOfFrequentLocationsCountries;
	unsigned long long _numberOfPetNodes;
	unsigned long long _numberOfBabyNodes;
	unsigned long long _numberOfCelebratedHolidays;
	unsigned long long _numberOfMomentsCelebratingAHoliday;
	double _ratioOfMomentsCelebratingAHoliday;
	unsigned long long _numberOfShortTrips;
	unsigned long long _numberOfLongTrips;
	unsigned long long _numberOfMomentsInTrip;
	double _ratioOfMomentsInTrip;
	unsigned long long _numberOfMomentsWithAtLeastOneGemAsset;
	double _ratioOfMomentsWithAtLeastOneGemAsset;

}

@property (nonatomic,retain) PGManager * manager;                                                                    //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) PGGraph * graph;                                                                        //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) unsigned long long librarySize;                                                         //@synthesize librarySize=_librarySize - In the implementation block
@property (assign,nonatomic) long long librarySizeRange;                                                             //@synthesize librarySizeRange=_librarySizeRange - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMoments;                                                     //@synthesize numberOfMoments=_numberOfMoments - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBusinessNodes;                                               //@synthesize numberOfBusinessNodes=_numberOfBusinessNodes - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsLinkedToABusinessNode;                                //@synthesize numberOfMomentsLinkedToABusinessNode=_numberOfMomentsLinkedToABusinessNode - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsLinkedToABusinessNode;                                             //@synthesize ratioOfMomentsLinkedToABusinessNode=_ratioOfMomentsLinkedToABusinessNode - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMoments;                                           //@synthesize numberOfMeaningfulMoments=_numberOfMeaningfulMoments - In the implementation block
@property (assign,nonatomic) double ratioOfMeaningfulMoments;                                                        //@synthesize ratioOfMeaningfulMoments=_ratioOfMeaningfulMoments - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsGathering;                                  //@synthesize numberOfMeaningfulMomentsGathering=_numberOfMeaningfulMomentsGathering - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsActivity;                                   //@synthesize numberOfMeaningfulMomentsActivity=_numberOfMeaningfulMomentsActivity - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsActivityBeach;                              //@synthesize numberOfMeaningfulMomentsActivityBeach=_numberOfMeaningfulMomentsActivityBeach - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsActivityDiving;                             //@synthesize numberOfMeaningfulMomentsActivityDiving=_numberOfMeaningfulMomentsActivityDiving - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsActivityHiking;                             //@synthesize numberOfMeaningfulMomentsActivityHiking=_numberOfMeaningfulMomentsActivityHiking - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsActivityClimbing;                           //@synthesize numberOfMeaningfulMomentsActivityClimbing=_numberOfMeaningfulMomentsActivityClimbing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsActivityWinterSport;                        //@synthesize numberOfMeaningfulMomentsActivityWinterSport=_numberOfMeaningfulMomentsActivityWinterSport - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainment;                              //@synthesize numberOfMeaningfulMomentsEntertainment=_numberOfMeaningfulMomentsEntertainment - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentAmusementPark;                 //@synthesize numberOfMeaningfulMomentsEntertainmentAmusementPark=_numberOfMeaningfulMomentsEntertainmentAmusementPark - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentNightOut;                      //@synthesize numberOfMeaningfulMomentsEntertainmentNightOut=_numberOfMeaningfulMomentsEntertainmentNightOut - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentPerformance;                   //@synthesize numberOfMeaningfulMomentsEntertainmentPerformance=_numberOfMeaningfulMomentsEntertainmentPerformance - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentConcert;                       //@synthesize numberOfMeaningfulMomentsEntertainmentConcert=_numberOfMeaningfulMomentsEntertainmentConcert - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentFestival;                      //@synthesize numberOfMeaningfulMomentsEntertainmentFestival=_numberOfMeaningfulMomentsEntertainmentFestival - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentTheater;                       //@synthesize numberOfMeaningfulMomentsEntertainmentTheater=_numberOfMeaningfulMomentsEntertainmentTheater - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentDance;                         //@synthesize numberOfMeaningfulMomentsEntertainmentDance=_numberOfMeaningfulMomentsEntertainmentDance - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentMuseum;                        //@synthesize numberOfMeaningfulMomentsEntertainmentMuseum=_numberOfMeaningfulMomentsEntertainmentMuseum - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsEntertainmentSportEvent;                    //@synthesize numberOfMeaningfulMomentsEntertainmentSportEvent=_numberOfMeaningfulMomentsEntertainmentSportEvent - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsCelebration;                                //@synthesize numberOfMeaningfulMomentsCelebration=_numberOfMeaningfulMomentsCelebration - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsCelebrationAnniversary;                     //@synthesize numberOfMeaningfulMomentsCelebrationAnniversary=_numberOfMeaningfulMomentsCelebrationAnniversary - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsCelebrationBirthday;                        //@synthesize numberOfMeaningfulMomentsCelebrationBirthday=_numberOfMeaningfulMomentsCelebrationBirthday - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsCelebrationHolidayEvent;                    //@synthesize numberOfMeaningfulMomentsCelebrationHolidayEvent=_numberOfMeaningfulMomentsCelebrationHolidayEvent - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsCelebrationWedding;                         //@synthesize numberOfMeaningfulMomentsCelebrationWedding=_numberOfMeaningfulMomentsCelebrationWedding - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsRestaurant;                                 //@synthesize numberOfMeaningfulMomentsRestaurant=_numberOfMeaningfulMomentsRestaurant - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsRestaurantBreakfast;                        //@synthesize numberOfMeaningfulMomentsRestaurantBreakfast=_numberOfMeaningfulMomentsRestaurantBreakfast - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsRestaurantLunch;                            //@synthesize numberOfMeaningfulMomentsRestaurantLunch=_numberOfMeaningfulMomentsRestaurantLunch - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeaningfulMomentsRestaurantDinner;                           //@synthesize numberOfMeaningfulMomentsRestaurantDinner=_numberOfMeaningfulMomentsRestaurantDinner - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfShortTrips;                                                  //@synthesize numberOfShortTrips=_numberOfShortTrips - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLongTrips;                                                   //@synthesize numberOfLongTrips=_numberOfLongTrips - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsInTrip;                                               //@synthesize numberOfMomentsInTrip=_numberOfMomentsInTrip - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsInTrip;                                                            //@synthesize ratioOfMomentsInTrip=_ratioOfMomentsInTrip - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEvents;                                                //@synthesize numberOfPublicEvents=_numberOfPublicEvents - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsLinkedToAPublicEvent;                                 //@synthesize numberOfMomentsLinkedToAPublicEvent=_numberOfMomentsLinkedToAPublicEvent - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsLinkedToAPublicEvent;                                              //@synthesize ratioOfMomentsLinkedToAPublicEvent=_ratioOfMomentsLinkedToAPublicEvent - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryMusicConcerts;                           //@synthesize numberOfPublicEventsCategoryMusicConcerts=_numberOfPublicEventsCategoryMusicConcerts - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryNightLife;                               //@synthesize numberOfPublicEventsCategoryNightLife=_numberOfPublicEventsCategoryNightLife - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryTheater;                                 //@synthesize numberOfPublicEventsCategoryTheater=_numberOfPublicEventsCategoryTheater - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryDance;                                   //@synthesize numberOfPublicEventsCategoryDance=_numberOfPublicEventsCategoryDance - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryFestivalsAndFairs;                       //@synthesize numberOfPublicEventsCategoryFestivalsAndFairs=_numberOfPublicEventsCategoryFestivalsAndFairs - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryArtsAndMuseums;                          //@synthesize numberOfPublicEventsCategoryArtsAndMuseums=_numberOfPublicEventsCategoryArtsAndMuseums - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategorySports;                                  //@synthesize numberOfPublicEventsCategorySports=_numberOfPublicEventsCategorySports - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryBusinessAndTechnology;                   //@synthesize numberOfPublicEventsCategoryBusinessAndTechnology=_numberOfPublicEventsCategoryBusinessAndTechnology - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryCommunity;                               //@synthesize numberOfPublicEventsCategoryCommunity=_numberOfPublicEventsCategoryCommunity - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryEducational;                             //@synthesize numberOfPublicEventsCategoryEducational=_numberOfPublicEventsCategoryEducational - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryFamilyEvents;                            //@synthesize numberOfPublicEventsCategoryFamilyEvents=_numberOfPublicEventsCategoryFamilyEvents - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryTours;                                   //@synthesize numberOfPublicEventsCategoryTours=_numberOfPublicEventsCategoryTours - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPublicEventsCategoryAppleEvents;                             //@synthesize numberOfPublicEventsCategoryAppleEvents=_numberOfPublicEventsCategoryAppleEvents - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSignificantMoments;                                          //@synthesize numberOfSignificantMoments=_numberOfSignificantMoments - In the implementation block
@property (assign,nonatomic) double ratioOfSignificantMoments;                                                       //@synthesize ratioOfSignificantMoments=_ratioOfSignificantMoments - In the implementation block
@property (assign,nonatomic) double ratioOfDaysWithASignificantEventPastYear;                                        //@synthesize ratioOfDaysWithASignificantEventPastYear=_ratioOfDaysWithASignificantEventPastYear - In the implementation block
@property (assign,nonatomic) double averageDurationBetweenTwoSignificantEvents;                                      //@synthesize averageDurationBetweenTwoSignificantEvents=_averageDurationBetweenTwoSignificantEvents - In the implementation block
@property (assign,nonatomic) BOOL hasMeNode;                                                                         //@synthesize hasMeNode=_hasMeNode - In the implementation block
@property (assign,nonatomic) BOOL hasNamedMeNode;                                                                    //@synthesize hasNamedMeNode=_hasNamedMeNode - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeople;                                                      //@synthesize numberOfPeople=_numberOfPeople - In the implementation block
@property (assign,nonatomic) double ratioOfPeopleLinkedToContact;                                                    //@synthesize ratioOfPeopleLinkedToContact=_ratioOfPeopleLinkedToContact - In the implementation block
@property (assign,nonatomic) double ratioOfPeopleNotLinkedToContact;                                                 //@synthesize ratioOfPeopleNotLinkedToContact=_ratioOfPeopleNotLinkedToContact - In the implementation block
@property (assign,nonatomic) double ratioOfFavoritedPeople;                                                          //@synthesize ratioOfFavoritedPeople=_ratioOfFavoritedPeople - In the implementation block
@property (assign,nonatomic) double ratioOfPeopleWithExplicitBirthdayDate;                                           //@synthesize ratioOfPeopleWithExplicitBirthdayDate=_ratioOfPeopleWithExplicitBirthdayDate - In the implementation block
@property (assign,nonatomic) double ratioOfPeopleWithInferredBirthdayDate;                                           //@synthesize ratioOfPeopleWithInferredBirthdayDate=_ratioOfPeopleWithInferredBirthdayDate - In the implementation block
@property (assign,nonatomic) double ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion;              //@synthesize ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion=_ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSocialGroups;                                                //@synthesize numberOfSocialGroups=_numberOfSocialGroups - In the implementation block
@property (assign,nonatomic) double ratioOfPeoplePartOfASocialGroup;                                                 //@synthesize ratioOfPeoplePartOfASocialGroup=_ratioOfPeoplePartOfASocialGroup - In the implementation block
@property (assign,nonatomic) double ratioOfTwoPeopleSocialGroup;                                                     //@synthesize ratioOfTwoPeopleSocialGroup=_ratioOfTwoPeopleSocialGroup - In the implementation block
@property (assign,nonatomic) unsigned long long maximumSocialGroupSize;                                              //@synthesize maximumSocialGroupSize=_maximumSocialGroupSize - In the implementation block
@property (assign,nonatomic) double averageSocialGroupSize;                                                          //@synthesize averageSocialGroupSize=_averageSocialGroupSize - In the implementation block
@property (assign,nonatomic) BOOL hasMusicData;                                                                      //@synthesize hasMusicData=_hasMusicData - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMusicSessions;                                               //@synthesize numberOfMusicSessions=_numberOfMusicSessions - In the implementation block
@property (assign,nonatomic) unsigned long long maximumMusicSessionSize;                                             //@synthesize maximumMusicSessionSize=_maximumMusicSessionSize - In the implementation block
@property (assign,nonatomic) double averageMusicSessionSize;                                                         //@synthesize averageMusicSessionSize=_averageMusicSessionSize - In the implementation block
@property (assign,nonatomic) BOOL hasMeHomeNode;                                                                     //@synthesize hasMeHomeNode=_hasMeHomeNode - In the implementation block
@property (assign,nonatomic) BOOL hasMeWorkNode;                                                                     //@synthesize hasMeWorkNode=_hasMeWorkNode - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsAtMyHome;                                             //@synthesize numberOfMomentsAtMyHome=_numberOfMomentsAtMyHome - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsAtMyWork;                                             //@synthesize numberOfMomentsAtMyWork=_numberOfMomentsAtMyWork - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsAtMyWork;                                                          //@synthesize ratioOfMomentsAtMyWork=_ratioOfMomentsAtMyWork - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsAtMyHome;                                                          //@synthesize ratioOfMomentsAtMyHome=_ratioOfMomentsAtMyHome - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFrequentLocations;                                           //@synthesize numberOfFrequentLocations=_numberOfFrequentLocations - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsAtAFrequentLocation;                                               //@synthesize ratioOfMomentsAtAFrequentLocation=_ratioOfMomentsAtAFrequentLocation - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFrequentLocationsCities;                                     //@synthesize numberOfFrequentLocationsCities=_numberOfFrequentLocationsCities - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFrequentLocationsCountries;                                  //@synthesize numberOfFrequentLocationsCountries=_numberOfFrequentLocationsCountries - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPetNodes;                                                    //@synthesize numberOfPetNodes=_numberOfPetNodes - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBabyNodes;                                                   //@synthesize numberOfBabyNodes=_numberOfBabyNodes - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCelebratedHolidays;                                          //@synthesize numberOfCelebratedHolidays=_numberOfCelebratedHolidays - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsCelebratingAHoliday;                                  //@synthesize numberOfMomentsCelebratingAHoliday=_numberOfMomentsCelebratingAHoliday - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsCelebratingAHoliday;                                               //@synthesize ratioOfMomentsCelebratingAHoliday=_ratioOfMomentsCelebratingAHoliday - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsWithAtLeastOneGemAsset;                               //@synthesize numberOfMomentsWithAtLeastOneGemAsset=_numberOfMomentsWithAtLeastOneGemAsset - In the implementation block
@property (assign,nonatomic) double ratioOfMomentsWithAtLeastOneGemAsset;                                            //@synthesize ratioOfMomentsWithAtLeastOneGemAsset=_ratioOfMomentsWithAtLeastOneGemAsset - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(PGManager *)manager;
-(NSDictionary *)payload;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(id)initWithGraphManager:(id)arg1 ;
-(unsigned long long)numberOfMoments;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfPeople;
-(void)setNumberOfPeople:(unsigned long long)arg1 ;
-(void)_fillGenericStatisticsWithGraph:(id)arg1 ;
-(void)_saveKey:(id)arg1 doubleValue:(double)arg2 payload:(id)arg3 ;
-(void)_saveKey:(id)arg1 integerValue:(unsigned long long)arg2 payload:(id)arg3 ;
-(void)_saveKey:(id)arg1 stringValue:(id)arg2 payload:(id)arg3 ;
-(unsigned long long)librarySize;
-(void)setLibrarySize:(unsigned long long)arg1 ;
-(long long)librarySizeRange;
-(void)setLibrarySizeRange:(long long)arg1 ;
-(unsigned long long)numberOfShortTrips;
-(void)setNumberOfShortTrips:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLongTrips;
-(void)setNumberOfLongTrips:(unsigned long long)arg1 ;
-(void)setNumberOfMoments:(unsigned long long)arg1 ;
-(void)_fillMomentStatisticsWithGraph:(id)arg1 ;
-(void)_fillMeaningfulEventsStatisticsWithGraph:(id)arg1 ;
-(void)_fillBusinessStatisticsWithGraph:(id)arg1 ;
-(void)_fillPublicEventStatisticsWithGraph:(id)arg1 ;
-(void)_fillPeopleStatisticsWithGraph:(id)arg1 ;
-(void)_fillMusicStatisticsWithGraph:(id)arg1 ;
-(void)_fillHolidaysStatisticsWithGraph:(id)arg1 ;
-(void)_fillBabyAndPetStatisticsWithGraph:(id)arg1 ;
-(void)_fillHomeWorkStatisticsWithGraph:(id)arg1 ;
-(void)_fillFrequentLocationsStatisticsWithGraph:(id)arg1 ;
-(void)_fillTripStatisticsWithGraph:(id)arg1 ;
-(void)_saveKey:(id)arg1 boolValue:(BOOL)arg2 payload:(id)arg3 ;
-(unsigned long long)numberOfBusinessNodes;
-(void)setNumberOfBusinessNodes:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsLinkedToABusinessNode;
-(void)setNumberOfMomentsLinkedToABusinessNode:(unsigned long long)arg1 ;
-(double)ratioOfMomentsLinkedToABusinessNode;
-(void)setRatioOfMomentsLinkedToABusinessNode:(double)arg1 ;
-(unsigned long long)numberOfMeaningfulMoments;
-(void)setNumberOfMeaningfulMoments:(unsigned long long)arg1 ;
-(double)ratioOfMeaningfulMoments;
-(void)setRatioOfMeaningfulMoments:(double)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsGathering;
-(void)setNumberOfMeaningfulMomentsGathering:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsActivity;
-(void)setNumberOfMeaningfulMomentsActivity:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsActivityBeach;
-(void)setNumberOfMeaningfulMomentsActivityBeach:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsActivityDiving;
-(void)setNumberOfMeaningfulMomentsActivityDiving:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsActivityHiking;
-(void)setNumberOfMeaningfulMomentsActivityHiking:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsActivityClimbing;
-(void)setNumberOfMeaningfulMomentsActivityClimbing:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsActivityWinterSport;
-(void)setNumberOfMeaningfulMomentsActivityWinterSport:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainment;
-(void)setNumberOfMeaningfulMomentsEntertainment:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentAmusementPark;
-(void)setNumberOfMeaningfulMomentsEntertainmentAmusementPark:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentNightOut;
-(void)setNumberOfMeaningfulMomentsEntertainmentNightOut:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentPerformance;
-(void)setNumberOfMeaningfulMomentsEntertainmentPerformance:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentConcert;
-(void)setNumberOfMeaningfulMomentsEntertainmentConcert:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentFestival;
-(void)setNumberOfMeaningfulMomentsEntertainmentFestival:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentTheater;
-(void)setNumberOfMeaningfulMomentsEntertainmentTheater:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentDance;
-(void)setNumberOfMeaningfulMomentsEntertainmentDance:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentMuseum;
-(void)setNumberOfMeaningfulMomentsEntertainmentMuseum:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsEntertainmentSportEvent;
-(void)setNumberOfMeaningfulMomentsEntertainmentSportEvent:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsCelebration;
-(void)setNumberOfMeaningfulMomentsCelebration:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsCelebrationAnniversary;
-(void)setNumberOfMeaningfulMomentsCelebrationAnniversary:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsCelebrationBirthday;
-(void)setNumberOfMeaningfulMomentsCelebrationBirthday:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsCelebrationHolidayEvent;
-(void)setNumberOfMeaningfulMomentsCelebrationHolidayEvent:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsCelebrationWedding;
-(void)setNumberOfMeaningfulMomentsCelebrationWedding:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsRestaurant;
-(void)setNumberOfMeaningfulMomentsRestaurant:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsRestaurantBreakfast;
-(void)setNumberOfMeaningfulMomentsRestaurantBreakfast:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsRestaurantLunch;
-(void)setNumberOfMeaningfulMomentsRestaurantLunch:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMeaningfulMomentsRestaurantDinner;
-(void)setNumberOfMeaningfulMomentsRestaurantDinner:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEvents;
-(void)setNumberOfPublicEvents:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryMusicConcerts;
-(void)setNumberOfPublicEventsCategoryMusicConcerts:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryNightLife;
-(void)setNumberOfPublicEventsCategoryNightLife:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryTheater;
-(void)setNumberOfPublicEventsCategoryTheater:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryDance;
-(void)setNumberOfPublicEventsCategoryDance:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryFestivalsAndFairs;
-(void)setNumberOfPublicEventsCategoryFestivalsAndFairs:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryArtsAndMuseums;
-(void)setNumberOfPublicEventsCategoryArtsAndMuseums:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategorySports;
-(void)setNumberOfPublicEventsCategorySports:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryBusinessAndTechnology;
-(void)setNumberOfPublicEventsCategoryBusinessAndTechnology:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryCommunity;
-(void)setNumberOfPublicEventsCategoryCommunity:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryEducational;
-(void)setNumberOfPublicEventsCategoryEducational:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryFamilyEvents;
-(void)setNumberOfPublicEventsCategoryFamilyEvents:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryTours;
-(void)setNumberOfPublicEventsCategoryTours:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPublicEventsCategoryAppleEvents;
-(void)setNumberOfPublicEventsCategoryAppleEvents:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsLinkedToAPublicEvent;
-(void)setNumberOfMomentsLinkedToAPublicEvent:(unsigned long long)arg1 ;
-(double)ratioOfMomentsLinkedToAPublicEvent;
-(void)setRatioOfMomentsLinkedToAPublicEvent:(double)arg1 ;
-(unsigned long long)numberOfSignificantMoments;
-(void)setNumberOfSignificantMoments:(unsigned long long)arg1 ;
-(double)ratioOfSignificantMoments;
-(void)setRatioOfSignificantMoments:(double)arg1 ;
-(double)ratioOfDaysWithASignificantEventPastYear;
-(void)setRatioOfDaysWithASignificantEventPastYear:(double)arg1 ;
-(double)averageDurationBetweenTwoSignificantEvents;
-(void)setAverageDurationBetweenTwoSignificantEvents:(double)arg1 ;
-(BOOL)hasMeNode;
-(void)setHasMeNode:(BOOL)arg1 ;
-(BOOL)hasNamedMeNode;
-(void)setHasNamedMeNode:(BOOL)arg1 ;
-(double)ratioOfPeopleLinkedToContact;
-(void)setRatioOfPeopleLinkedToContact:(double)arg1 ;
-(double)ratioOfPeopleNotLinkedToContact;
-(void)setRatioOfPeopleNotLinkedToContact:(double)arg1 ;
-(double)ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion;
-(void)setRatioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion:(double)arg1 ;
-(double)ratioOfFavoritedPeople;
-(void)setRatioOfFavoritedPeople:(double)arg1 ;
-(double)ratioOfPeopleWithExplicitBirthdayDate;
-(void)setRatioOfPeopleWithExplicitBirthdayDate:(double)arg1 ;
-(double)ratioOfPeopleWithInferredBirthdayDate;
-(void)setRatioOfPeopleWithInferredBirthdayDate:(double)arg1 ;
-(unsigned long long)numberOfSocialGroups;
-(void)setNumberOfSocialGroups:(unsigned long long)arg1 ;
-(double)ratioOfPeoplePartOfASocialGroup;
-(void)setRatioOfPeoplePartOfASocialGroup:(double)arg1 ;
-(double)ratioOfTwoPeopleSocialGroup;
-(void)setRatioOfTwoPeopleSocialGroup:(double)arg1 ;
-(unsigned long long)maximumSocialGroupSize;
-(void)setMaximumSocialGroupSize:(unsigned long long)arg1 ;
-(double)averageSocialGroupSize;
-(void)setAverageSocialGroupSize:(double)arg1 ;
-(BOOL)hasMusicData;
-(void)setHasMusicData:(BOOL)arg1 ;
-(unsigned long long)numberOfMusicSessions;
-(void)setNumberOfMusicSessions:(unsigned long long)arg1 ;
-(unsigned long long)maximumMusicSessionSize;
-(void)setMaximumMusicSessionSize:(unsigned long long)arg1 ;
-(double)averageMusicSessionSize;
-(void)setAverageMusicSessionSize:(double)arg1 ;
-(BOOL)hasMeHomeNode;
-(void)setHasMeHomeNode:(BOOL)arg1 ;
-(BOOL)hasMeWorkNode;
-(void)setHasMeWorkNode:(BOOL)arg1 ;
-(unsigned long long)numberOfMomentsAtMyHome;
-(void)setNumberOfMomentsAtMyHome:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsAtMyWork;
-(void)setNumberOfMomentsAtMyWork:(unsigned long long)arg1 ;
-(double)ratioOfMomentsAtMyHome;
-(void)setRatioOfMomentsAtMyHome:(double)arg1 ;
-(double)ratioOfMomentsAtMyWork;
-(void)setRatioOfMomentsAtMyWork:(double)arg1 ;
-(double)ratioOfMomentsAtAFrequentLocation;
-(void)setRatioOfMomentsAtAFrequentLocation:(double)arg1 ;
-(unsigned long long)numberOfFrequentLocations;
-(void)setNumberOfFrequentLocations:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFrequentLocationsCities;
-(void)setNumberOfFrequentLocationsCities:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFrequentLocationsCountries;
-(void)setNumberOfFrequentLocationsCountries:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPetNodes;
-(void)setNumberOfPetNodes:(unsigned long long)arg1 ;
-(unsigned long long)numberOfBabyNodes;
-(void)setNumberOfBabyNodes:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCelebratedHolidays;
-(void)setNumberOfCelebratedHolidays:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMomentsCelebratingAHoliday;
-(void)setNumberOfMomentsCelebratingAHoliday:(unsigned long long)arg1 ;
-(double)ratioOfMomentsCelebratingAHoliday;
-(void)setRatioOfMomentsCelebratingAHoliday:(double)arg1 ;
-(unsigned long long)numberOfMomentsInTrip;
-(void)setNumberOfMomentsInTrip:(unsigned long long)arg1 ;
-(double)ratioOfMomentsInTrip;
-(void)setRatioOfMomentsInTrip:(double)arg1 ;
-(unsigned long long)numberOfMomentsWithAtLeastOneGemAsset;
-(void)setNumberOfMomentsWithAtLeastOneGemAsset:(unsigned long long)arg1 ;
-(double)ratioOfMomentsWithAtLeastOneGemAsset;
-(void)setRatioOfMomentsWithAtLeastOneGemAsset:(double)arg1 ;
@end

