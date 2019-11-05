/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class NSArray, NSString, WFTemperature, NSURL, CLLocation, NSTimeZone, NSDate, NSError, NSNumber, WFAQIScaleCategory, WFLocation, NSTimer, WFGeocodeRequest, NSHashTable, NSDictionary;

@interface City : NSObject {

	BOOL _isDay;
	BOOL _isLocalWeatherCity;
	BOOL _transient;
	BOOL _autoUpdate;
	BOOL _isUpdating;
	BOOL _isRequestedByFrameworkClient;
	BOOL _lockedForDemoMode;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	float _dewPoint;
	float _heatIndex;
	long long _conditionCode;
	NSArray* _dayForecasts;
	NSArray* _hourlyForecasts;
	NSString* _updateTimeString;
	NSString* _name;
	NSString* _woeid;
	NSString* _state;
	NSString* _ISO3166CountryAbbreviation;
	WFTemperature* _temperature;
	WFTemperature* _feelsLike;
	unsigned long long _observationTime;
	unsigned long long _sunsetTime;
	unsigned long long _sunriseTime;
	unsigned long long _moonPhase;
	unsigned long long _uvIndex;
	double _precipitationPast24Hours;
	NSURL* _link;
	NSURL* _deeplink;
	CLLocation* _location;
	NSTimeZone* _timeZone;
	NSDate* _timeZoneUpdateDate;
	NSError* _lastUpdateError;
	NSDate* _updateTime;
	unsigned long long _pressureRising;
	NSNumber* _airQualityIdx;
	NSNumber* _airQualityCategory;
	WFAQIScaleCategory* _airQualityScaleCategory;
	WFLocation* _wfLocation;
	unsigned long long _lastUpdateStatus;
	long long _updateInterval;
	NSTimer* _autoUpdateTimer;
	WFGeocodeRequest* _activeGeocodeRequest;
	NSHashTable* _cityUpdateObservers;
	NSString* _fullName;

}

@property (readonly) NSDictionary * urlComponents; 
@property (nonatomic,retain) WFLocation * wfLocation;                                    //@synthesize wfLocation=_wfLocation - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                      //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSError * lastUpdateError;                                  //@synthesize lastUpdateError=_lastUpdateError - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateStatus;                        //@synthesize lastUpdateStatus=_lastUpdateStatus - In the implementation block
@property (assign,nonatomic) BOOL isUpdating;                                            //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) BOOL isRequestedByFrameworkClient;                          //@synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient - In the implementation block
@property (assign,nonatomic) BOOL lockedForDemoMode;                                     //@synthesize lockedForDemoMode=_lockedForDemoMode - In the implementation block
@property (assign,nonatomic) long long updateInterval;                                   //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) NSTimer * autoUpdateTimer;                                  //@synthesize autoUpdateTimer=_autoUpdateTimer - In the implementation block
@property (nonatomic,retain) WFGeocodeRequest * activeGeocodeRequest;                    //@synthesize activeGeocodeRequest=_activeGeocodeRequest - In the implementation block
@property (nonatomic,copy) NSString * updateTimeString;                                  //@synthesize updateTimeString=_updateTimeString - In the implementation block
@property (nonatomic,retain) NSHashTable * cityUpdateObservers;                          //@synthesize cityUpdateObservers=_cityUpdateObservers - In the implementation block
@property (nonatomic,readonly) BOOL timeZoneIsFresh; 
@property (nonatomic,copy) NSString * fullName;                                          //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) BOOL isLocalWeatherCity;                                    //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                          //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) NSString * woeid;                                             //@synthesize woeid=_woeid - In the implementation block
@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * locationID; 
@property (nonatomic,copy) NSString * state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * ISO3166CountryAbbreviation;                        //@synthesize ISO3166CountryAbbreviation=_ISO3166CountryAbbreviation - In the implementation block
@property (nonatomic,retain) WFTemperature * temperature;                                //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,retain) WFTemperature * feelsLike;                                  //@synthesize feelsLike=_feelsLike - In the implementation block
@property (assign,nonatomic) long long conditionCode;                                    //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) unsigned long long observationTime;                         //@synthesize observationTime=_observationTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunsetTime;                              //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunriseTime;                             //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (assign,nonatomic) unsigned long long moonPhase;                               //@synthesize moonPhase=_moonPhase - In the implementation block
@property (assign,setter=setUVIndex:,nonatomic) unsigned long long uvIndex;              //@synthesize uvIndex=_uvIndex - In the implementation block
@property (assign,nonatomic) double precipitationPast24Hours;                            //@synthesize precipitationPast24Hours=_precipitationPast24Hours - In the implementation block
@property (nonatomic,copy) NSURL * link;                                                 //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSURL * deeplink;                                             //@synthesize deeplink=_deeplink - In the implementation block
@property (copy) CLLocation * location;                                                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double latitude; 
@property (nonatomic,retain) NSDate * timeZoneUpdateDate;                                //@synthesize timeZoneUpdateDate=_timeZoneUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * updateTime;                                        //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,nonatomic) float windChill;                                            //@synthesize windChill=_windChill - In the implementation block
@property (assign,nonatomic) float windDirection;                                        //@synthesize windDirection=_windDirection - In the implementation block
@property (assign,nonatomic) float windSpeed;                                            //@synthesize windSpeed=_windSpeed - In the implementation block
@property (assign,nonatomic) float humidity;                                             //@synthesize humidity=_humidity - In the implementation block
@property (assign,nonatomic) float visibility;                                           //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) float pressure;                                             //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) unsigned long long pressureRising;                          //@synthesize pressureRising=_pressureRising - In the implementation block
@property (assign,nonatomic) float dewPoint;                                             //@synthesize dewPoint=_dewPoint - In the implementation block
@property (assign,nonatomic) float heatIndex;                                            //@synthesize heatIndex=_heatIndex - In the implementation block
@property (nonatomic,retain) NSNumber * airQualityIdx;                                   //@synthesize airQualityIdx=_airQualityIdx - In the implementation block
@property (nonatomic,retain) NSNumber * airQualityCategory;                              //@synthesize airQualityCategory=_airQualityCategory - In the implementation block
@property (nonatomic,retain) WFAQIScaleCategory * airQualityScaleCategory;               //@synthesize airQualityScaleCategory=_airQualityScaleCategory - In the implementation block
@property (assign,nonatomic) BOOL isDay;                                                 //@synthesize isDay=_isDay - In the implementation block
@property (assign,nonatomic) BOOL autoUpdate;                                            //@synthesize autoUpdate=_autoUpdate - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * dayForecasts;                                       //@synthesize dayForecasts=_dayForecasts - In the implementation block
+(id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3 ;
+(id)_ISO8601Calendar;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setName:(NSString *)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)dictionaryRepresentation;
-(void)setVisibility:(float)arg1 ;
-(float)visibility;
-(id)displayName;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setUpdateInterval:(long long)arg1 ;
-(long long)updateInterval;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(BOOL)update;
-(void)setTemperature:(WFTemperature *)arg1 ;
-(WFTemperature *)temperature;
-(CLLocation *)location;
-(float)pressure;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setPressure:(float)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDate *)updateTime;
-(void)setUpdateTime:(NSDate *)arg1 ;
-(id)detailedDescription;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(long long)conditionCode;
-(void)setConditionCode:(long long)arg1 ;
-(float)dewPoint;
-(void)setDewPoint:(float)arg1 ;
-(float)heatIndex;
-(void)setHeatIndex:(float)arg1 ;
-(unsigned long long)moonPhase;
-(void)setMoonPhase:(unsigned long long)arg1 ;
-(unsigned long long)uvIndex;
-(float)windChill;
-(void)setWindChill:(float)arg1 ;
-(float)windSpeed;
-(void)setWindSpeed:(float)arg1 ;
-(float)windDirection;
-(void)setWindDirection:(float)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(BOOL)isUpdating;
-(BOOL)_isUpdating;
-(void)_updateTimeZone;
-(void)setIsLocalWeatherCity:(BOOL)arg1 ;
-(BOOL)isLocalWeatherCity;
-(NSString *)locationID;
-(BOOL)isDay;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 ;
-(NSString *)ISO3166CountryAbbreviation;
-(WFTemperature *)feelsLike;
-(void)setFeelsLike:(WFTemperature *)arg1 ;
-(float)humidity;
-(void)setHumidity:(float)arg1 ;
-(unsigned long long)pressureRising;
-(void)setPressureRising:(unsigned long long)arg1 ;
-(void)setUVIndex:(unsigned long long)arg1 ;
-(double)precipitationPast24Hours;
-(void)setPrecipitationPast24Hours:(double)arg1 ;
-(unsigned long long)observationTime;
-(void)setObservationTime:(unsigned long long)arg1 ;
-(NSNumber *)airQualityIdx;
-(WFAQIScaleCategory *)airQualityScaleCategory;
-(NSNumber *)airQualityCategory;
-(NSArray *)dayForecasts;
-(unsigned long long)precipitationForecast;
-(NSURL *)deeplink;
-(void)_clearAutoUpdateTimer;
-(unsigned long long)sunriseTime;
-(unsigned long long)sunsetTime;
-(NSHashTable *)cityUpdateObservers;
-(void)setCityUpdateObservers:(NSHashTable *)arg1 ;
-(void)setAutoUpdateTimer:(NSTimer *)arg1 ;
-(BOOL)lockedForDemoMode;
-(unsigned long long)weatherDataAge;
-(long long)timeDigit;
-(BOOL)_dataIsValid;
-(void)setIsUpdating:(BOOL)arg1 ;
-(void)_notifyDidStartWeatherUpdate;
-(NSDate *)timeZoneUpdateDate;
-(BOOL)timeZoneIsFresh;
-(void)updateTimeZoneWithCompletionBlock:(/*^block*/id)arg1 ;
-(WFGeocodeRequest *)activeGeocodeRequest;
-(void)setWfLocation:(WFLocation *)arg1 ;
-(void)setActiveGeocodeRequest:(WFGeocodeRequest *)arg1 ;
-(void)setDayForecasts:(NSArray *)arg1 ;
-(void)setAirQualityIdx:(NSNumber *)arg1 ;
-(void)setAirQualityScaleCategory:(WFAQIScaleCategory *)arg1 ;
-(void)setAirQualityCategory:(NSNumber *)arg1 ;
-(void)setLastUpdateStatus:(unsigned long long)arg1 ;
-(void)setLastUpdateError:(NSError *)arg1 ;
-(void)discardDataIfNeeded;
-(void)setTimeZoneUpdateDate:(NSDate *)arg1 ;
-(void)setISO3166CountryAbbreviation:(NSString *)arg1 ;
-(void)setDeeplink:(NSURL *)arg1 ;
-(void)setSunsetTime:(unsigned long long)arg1 ;
-(void)setSunriseTime:(unsigned long long)arg1 ;
-(unsigned long long)lastUpdateStatus;
-(double)distanceToLatitude:(double)arg1 longitude:(double)arg2 ;
-(double)distanceToLocation:(id)arg1 ;
-(id)naturalLanguageDescriptionWithDescribedCondition:(out long long*)arg1 ;
-(id)windDirectionAsString:(double)arg1 ;
-(long long)primaryConditionForRange:(NSRange)arg1 ;
-(long long)locationOfTime:(long long)arg1 ;
-(void)clearForecasts;
-(void)setAutoUpdate:(BOOL)arg1 ;
-(void)setIsDay:(BOOL)arg1 ;
-(void)localWeatherDidBeginUpdate;
-(void)cityDidFinishUpdatingWithError:(id)arg1 ;
-(BOOL)isUpdatingOrNoData;
-(id)cityAndState;
-(id)getName;
-(BOOL)populateWithDataFromCity:(id)arg1 ;
-(BOOL)containsLatitude:(double)arg1 longitude:(double)arg2 ;
-(BOOL)isDuplicateOfCity:(id)arg1 ;
-(id)naturalLanguageDescription;
-(void)_generateLocalizableStrings;
-(void)updateCityForModel:(id)arg1 ;
-(NSString *)updateTimeString;
-(void)setUpdateTimeString:(NSString *)arg1 ;
-(NSString *)woeid;
-(void)setWoeid:(NSString *)arg1 ;
-(NSError *)lastUpdateError;
-(BOOL)autoUpdate;
-(WFLocation *)wfLocation;
-(BOOL)isRequestedByFrameworkClient;
-(void)setIsRequestedByFrameworkClient:(BOOL)arg1 ;
-(void)setLockedForDemoMode:(BOOL)arg1 ;
-(NSTimer *)autoUpdateTimer;
-(NSDictionary *)urlComponents;
@end

